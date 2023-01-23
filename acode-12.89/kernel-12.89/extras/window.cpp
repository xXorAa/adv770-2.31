// window.cpp: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021, licensed
// under GPL (version 3 or later) or the Modified BSD Licence, whichever is
// asserted by the supplied LICENCE file. GPL3 if no licence file.
//
// 04 Mar 20   MLA          First release version
// ?? ??? 08   MLA          Initial coding
//
#include <QtWidgets>
#include <QDialog>
#include <QSettings>

#include "window.h"
#include "defaults.h"
#include "info.h"
#include "advinfo.h"

Window::Window()
{
  createActions();
  createMenus();

  centralWidget = new ACode(this);
  setCentralWidget(centralWidget);
  QCoreApplication::setOrganizationName(MYSELF);
  QCoreApplication::setOrganizationDomain(MIPMIP);
  QCoreApplication::setApplicationName(GAME);
  QSettings settings;
  if (!settings.contains("baseFontSize"))
  {
    baseFontSize = centralWidget->commandLine->font().pointSize();
    settings.setValue("baseFontSize", baseFontSize);
  }
  else
    baseFontSize = settings.value("baseFontSize").value<int>();
  restoreSettings();
  settings.clear();   // Clear out any old rubbish
  saveSettings();
  setWindowTitle(GAME);
}

QAction *Window::makeAction(const QString &text, 
                              const char *member,
                              const QString &shortcut)
{
  QAction *action = new QAction(text, this);
  connect(action, SIGNAL(triggered()), this, member);
  if (!shortcut.isNull())
    action->setShortcut(shortcut);
  return(action);
}

void Window::createActions()
{
  loadAct = makeAction(tr("&Load Game..."), SLOT(load()), tr("Ctrl+L"));
  saveAct = makeAction(tr("&Save Game..."), SLOT(save()), tr("Ctrl+S"));
  exitAct = makeAction(tr("E&xit"),         SLOT(close()),tr("Ctrl+Q"));

  hintAct = makeAction(tr("Game &Hint"), SLOT(aboutHint()), tr("Ctrl+H"));
  aboutAct = makeAction(tr("About This &Game"), SLOT(aboutGame()), NULL);
  aboutPlayAct = makeAction(tr("About This Game &Interface"),
    SLOT(aboutPlay()), NULL);
  aboutACodeAct = makeAction(tr("About &A-code"), SLOT(aboutACode()), NULL);

//   setFnAct = makeAction(tr("Select &Font..."), SLOT(setFont()), tr("Ctrl+F"));
//   setMgAct = makeAction(tr("Set &Margin"), SLOT(chooseMargin()), tr("Ctrl+M"));

  setFgAct = makeAction(tr("Select &Text colour..."), 
    SLOT(setFgColour()), tr("Ctrl+T"));
  setBgAct = makeAction(tr("Select &Background colour"), 
    SLOT(setBgColour()), tr("Ctrl+B"));
  setPrAct = makeAction(tr("Select &Prompt colour..."),  
    SLOT(choosePrColour()), tr("Ctrl+P"));
  toggleButtonsAct = makeAction(tr("To&ggle submit button(s)"),
    SLOT(toggleButtons()), tr("Ctrl+G"));

  zoomInAct  = makeAction(tr("&Increase font size"), 
    SLOT(growFont()), tr("Ctrl+I"));
  zoomOutAct = makeAction(tr("&Decrease font size"), 
    SLOT(shrinkFont()), tr("Ctrl+D"));

//   settAct =  makeAction(tr("Save Settings"), SLOT(saveSettings()), NULL);
//   setRSAct = makeAction(tr("Restore &Settings"), SLOT(restoreSettings()), NULL);
  setRDAct = makeAction(tr("Restore &Default Settings"), 
    SLOT(restoreDefaults()), tr("Ctrl+R"));
}

void Window::toggleButtons()
{
  centralWidget->toggleButtons();
  saveSettings();
}

void Window::createMenus()
{
   fileMenu = menuBar()->addMenu(tr("&File"));
   fileMenu->addAction(loadAct);
   fileMenu->addAction(saveAct);
   fileMenu->addSeparator();
   fileMenu->addAction(exitAct);

   viewMenu = menuBar()->addMenu(tr("&Settings"));
//    viewMenu->addAction(setFnAct);
//    viewMenu->addAction(setMgAct);
   viewMenu->addSeparator();
   viewMenu->addAction(setFgAct);
   viewMenu->addAction(setBgAct);
   viewMenu->addAction(setPrAct);
   viewMenu->addAction(toggleButtonsAct);
   viewMenu->addSeparator();
   viewMenu->addAction(zoomInAct);
   viewMenu->addAction(zoomOutAct);
   viewMenu->addSeparator();
//    viewMenu->addAction(settAct);
//    viewMenu->addAction(setRSAct);
   viewMenu->addAction(setRDAct);

   helpMenu = menuBar()->addMenu(tr("&Help"));
   helpMenu->addAction(hintAct);
   helpMenu->addSeparator();
   helpMenu->addAction(aboutAct);
   helpMenu->addAction(aboutPlayAct);
    helpMenu->addAction(aboutACodeAct);
}

void Window::aboutGame()
{
  QMessageBox::about(this, tr("About " GAME), tr(GAMEINFO));
}

void Window::aboutPlay()
{
  QMessageBox::about(this, tr("About This Game Interface"), playInfo);
}

void Window::aboutACode()
{
  QMessageBox::about(this, tr("About A-code"), acodeInfo);
}

void Window::aboutHint()
{
  centralWidget->commandLine->setEditText("Help");
  centralWidget->doCommand();
}

void Window::load()
{
  QString fileName = QFileDialog::getOpenFileName(this,
    tr("Load saved game"), "", "Saved games (*.adv)");
  if (! fileName.isEmpty())
  {
    if (fileName.endsWith(".adv"))
      fileName.truncate(fileName.length() - 4);
    fileName.prepend("load ");
    centralWidget->commandLine->setEditText(fileName);
    centralWidget->doCommand();
  }
}

void Window::save()
{
  QString fileName = QFileDialog::getOpenFileName(this,
    tr("Save current game"), "", "Saved games (*.adv)");
  if (! fileName.isEmpty())
  {
    fileName.truncate(fileName.length() - 4);
    fileName.prepend("save ");
    centralWidget->commandLine->setEditText(fileName);
    centralWidget->doCommand();
  }
}

void  Window::setStyle()
{
  QString js = "restyle(\"body {background-color:" + 
    bgColourName + "; color:" + fgColourName + "} .query {color:" +
      prColourName + "}\");"; 
  centralWidget->webView->page()->mainFrame()->evaluateJavaScript(js);
  QPalette p = centralWidget->commandLine->palette();
  p.setColor(QPalette::Active, QPalette::Base, QColor(bgColourName));
  p.setColor(QPalette::Inactive, QPalette::Base, QColor(bgColourName));
  p.setColor(QPalette::Active, QPalette::Text, QColor(fgColourName));
  p.setColor(QPalette::Inactive, QPalette::Text, QColor(fgColourName));
  centralWidget->commandLine->setPalette(p);
}

void Window::choosePrColour()
{
  QColor prOldColour;
  prOldColour.setNamedColor(prColourName);
  QColor c = QColorDialog::getColor(prOldColour, this);
  prColourName = c.name();
  setStyle();
  QSettings settings;
  settings.setValue("prColourName", prColourName);
}

void Window::setFgColour()
{
  QColor fgOldColour;
  fgOldColour.setNamedColor(fgColourName);
  QColor c = QColorDialog::getColor(fgOldColour, this);
  fgColourName = c.name();
  setStyle();
  QSettings settings;
  settings.setValue("fgColourName", fgColourName);
}

void Window::setBgColour()
{
  QColor bgOldColour;
  bgOldColour.setNamedColor(bgColourName);
  QColor c = QColorDialog::getColor(bgOldColour, this);
  bgColourName = c.name();
  setStyle();
  QSettings settings;
  settings.setValue("bgColourName", bgColourName);
}

//void Window::setFont()
//{
//   bool ok;
//   QFont font = QFontDialog::getFont(&ok,
//      centralWidget->webView->font(), this);
//   if (ok)
//   {
//      centralWidget->webView->setFont(font);
//      updateFonts();
//   }
//}

void Window::growFont()
{
  zoomLevel += 0.05;
  updateFonts();
  QSettings settings;
  settings.setValue("zoomLevel", zoomLevel);
}

void Window::shrinkFont()
{
  zoomLevel -= 0.05;
  updateFonts();
  QSettings settings;
  settings.setValue("zoomLevel", zoomLevel);
}

void Window::updateFonts()
{
  centralWidget->webView->setZoomFactor(zoomLevel);
  QFont f = centralWidget->commandLine->font();
  int scale = (int)(zoomLevel * baseFontSize);
  f.setPointSize(scale);
  centralWidget->commandLine->setFont(f);
  centralWidget->commandLabel->setFont(f);
  centralWidget->submitButton->setFont(f);
  centralWidget->yesButton->setFont(f);
  centralWidget->noButton->setFont(f);
  centralWidget->maybeButton->setFont(f);
  centralWidget->exitButton->setFont(f);
  menuBar()->setFont(f);
  fileMenu->setFont(f);
  viewMenu->setFont(f);
  helpMenu->setFont(f);
}

void Window::saveSettings()
{
  QSettings settings;
  settings.setValue ("bgColourName", bgColourName);
  settings.setValue ("fgColourName", fgColourName);
  settings.setValue ("prColourName", prColourName);
  settings.setValue ("zoomLevel", zoomLevel);
  settings.setValue ("windowSize", windowSize);
  settings.setValue ("buttonState", centralWidget->buttonState);
}

void Window::restoreSettings()
{
  QSettings settings;
  QString c;

  if (settings.contains("bgColourName"))
    bgColourName = settings.value("bgColourName").value<QString>();
  else
    bgColourName = DFBACKGROUND;

  if (settings.contains("fgColourName"))
    fgColourName = settings.value("fgColourName").value<QString>();
  else
    fgColourName = DFFOREGROUND;

  if (settings.contains("prColourName"))
    prColourName = settings.value("prColourName").value<QString>();
  else
    prColourName = DFPROMPT;

  if (settings.contains("buttonState"))
    centralWidget->buttonState = settings.value("buttonState").value<int>();
  else
    centralWidget->buttonState = 3;

  if (settings.contains("zoomLevel"))
    zoomLevel = settings.value("zoomLevel").value<qreal>();
  else
    zoomLevel = 1.0;
  
  if (settings.contains("windowSize"))
  {
    windowSize = settings.value("windowSize").value<QSize>();
  }
  else
  {
    const QRect availableGeometry =
    QApplication::desktop()->availableGeometry(this);
    int width = availableGeometry.width();
    int height = availableGeometry.height();
    if (width > DFWIDTH) width = DFWIDTH;
    height *= 0.95;
    windowSize = QSize(width, height);
  }

  saveSettings();
  centralWidget->buttonDisplay();
  updateFonts();
  setStyle();
  resize(windowSize);
}

void Window::restoreDefaults()
{
  QSettings settings;
  this->showNormal();
  settings.clear();
  restoreSettings();
}

//void Window::chooseMargin()
//{
//}

void Window::closeEvent (QCloseEvent *event)
{
  saveSettings();
  event->accept();
}     

void Window::resizeEvent(QResizeEvent *event)
{
  centralWidget->scrollToBottom();
  QSettings settings;
  windowSize = this->size();
  settings.setValue ("windowSize", windowSize);
  event->accept();
}

//void Window::changeEvent(QEvent *e)
//{
//  if( e->type() == QEvent::WindowStateChange )
//  {
//    QWindowStateChangeEvent* event = static_cast< QWindowStateChangeEvent* >( e );
//    
//    if( event->oldState() & Qt::WindowMinimized )
//      qDebug() << "Window restored (to normal or maximized state)!";
//    else if( event->oldState() == Qt::WindowNoState && this->windowState() == 
//      Qt::WindowMaximized )
//        qDebug() << "Window Maximized!";
//    else if( event->oldState() == Qt::WindowMaximized && this->windowState() == 
//      Qt::WindowNoState )
//        qDebug() << "Window Normalised!";
//  } 
//}

/*====================================================================*/

