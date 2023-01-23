// acode.cpp: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021, licensed
// under GPL (version 3 or later) or the Modified BSD Licence, whichever is
// asserted by the supplied LICENCE file. GPL3 if no licence file.
//
// 04 Mar 20   MLA          First release version
// ?? ??? 08   MLA          Initial coding
//
#include <iostream>
#include <QtWidgets>

#include "acode.h"
#include "defaults.h"
#include "page.h"
#include "advinfo.h"

extern "C" char *advturn(char *);

int p2c[2];
int c2p[2];

ACode::ACode(QWidget *parent)
    : QWidget(parent)
{
  webView = new QWebView;
  commandLabel = new QLabel(tr("Command:"));
  commandLine = new QComboBox;
  commandLine->setEditable(true);
  commandLine->setDuplicatesEnabled(true);
  commandLine->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
  commandLine->setInsertPolicy(QComboBox::InsertAtBottom);
  commandLine->setMaxCount(MAX_STACK_SIZE);
  commandLine->setCompleter(0);

  QColor buttonRed(255, 90, 90);
  exitButton = new Button(tr("Exit"), buttonRed);
  noButton = new QPushButton(tr("&No"));
  submitButton = new QPushButton(tr("Submit"));
  yesButton = new QPushButton(tr("&Yes"));
  maybeButton = new QPushButton(tr("&Maybe"));

  QHBoxLayout *commandLayout = new QHBoxLayout;
  commandLayout->addWidget(yesButton);
  commandLayout->addWidget(noButton);
  commandLayout->addWidget(maybeButton);
  commandLayout->addWidget(exitButton);
  exitButton->hide();
  commandLayout->addWidget(commandLabel);
  commandLayout->addWidget(commandLine);
  commandLayout->addWidget(submitButton);
  QVBoxLayout *mainLayout = new QVBoxLayout;
  mainLayout->addWidget(webView);
  mainLayout->addLayout(commandLayout);
  setLayout(mainLayout);

  connect(submitButton, SIGNAL(clicked()), this, SLOT(doIt()));
  connect(yesButton, SIGNAL(clicked()), this, SLOT(yesClicked()));
  connect(noButton, SIGNAL(clicked()), this, SLOT(noClicked()));
  connect(maybeButton, SIGNAL(clicked()), this, SLOT(maybeClicked()));
  connect(exitButton, SIGNAL(clicked()), this, SLOT(exitGame()));

  webView->setHtml(page);
  char list[] = "_LIST_";
  QString response;
  QString saved = advturn(list);
//qDebug() << "==== SAVED: " + saved;
  QString autosave = "." GAME;
  if (saved.contains(autosave.toLower()))
  {
    char init [] = "_RESUME_HTML_"; 
    response = advturn(init);
  }
  else
  {
    char init[] = "_START_HTML_";
    response = advturn(init);
//qDebug() << "==== RESPONSE: " + response;
  }
  showResponse("", response.toLatin1().data());
  commandLine->setFocus();
}

void ACode::buttonDisplay()
{

  if (buttonState & 2)
    submitButton->show();
  else
    submitButton->hide();
  if (buttonState == 7)
  {
    yesButton->show();
    noButton->show();
    maybeButton->show();
  }
  else
  {
    yesButton->hide();
    noButton->hide();
    maybeButton->hide();
  }
}

void ACode::toggleButtons()
{
  if (buttonState)
  {
    buttonState ^= 2;
    buttonDisplay();
  }
}

void ACode::showResponse(QString cmd, QString msg)
{
  QString type = msg.left(1);

  if (type == "f")
  {
    commandLine->hide();
    commandLabel->hide();
    buttonState = 0;
    buttonDisplay();
    exitButton->show();
    exitButton->setAutoDefault(true);
//
// NB: the leading 't' is not for display. It signals the rest of the string
// being a plain text (as oposed to a query or a final text).
//
    showResponse("", "tTo exit, click on the EXIT bar below or press the ENTER key.");
    exitButton->setFocus();
  }

  if (buttonState & 1)
  {
    if (type == 'q')
    {
      if (msg.indexOf("'prompt'>: <") < 0)
        buttonState |= 4;
    }
    else 
      buttonState &= 3;
  }
  buttonDisplay();
//
// Pass the command and the response to JavaScript code to handle.
//
  QString js = "writeIt(\"" + cmd + "\", \"" + msg + "\");";
  webView->page()->mainFrame()->evaluateJavaScript(js);
}

QSize ACode::sizeHint() const
{
  const QRect availableGeometry = QApplication::desktop()->availableGeometry(this);
  int width = availableGeometry.width();
  int height = availableGeometry.height();
  if (width > DFWIDTH) width = DFWIDTH;
  height *= 0.9;
  return QSize(width, height);  
}

void ACode::yesClicked()
{
  commandLine->setEditText("Yes");
  doCommand();
}

void ACode::noClicked()
{
  commandLine->setEditText("No");
  doCommand();
}

void ACode::maybeClicked()
{
 commandLine->setEditText("Maybe");
 doCommand();
}

void ACode::exitGame()
{
  exit(0);
}

void ACode::doIt()
{
  doCommand();
}

void ACode::doCommand(void)
{
  QString command = commandLine->currentText();
  QString cmd = command + "\n";
  QString response = advturn(cmd.toLatin1().data());
  showResponse(command.toLatin1().data(), response.toLatin1().data());
  scrollToBottom();
  if (! cmd.trimmed().isEmpty())    // If non-blank command
  {
    int previous = commandLine->currentIndex() - 1;
//
// We need to remove the previously inserted blank item. Having done so we
// also need to remove the preceding command item if it is the same as the
// new one. I.e. duplicates are allowed only if they are non-adjacent. Do
// index offsets make sense in the next few lines? Dunno, but they work! :-)
//
    commandLine->removeItem(previous);
    if (command == commandLine->itemText(previous - 1))
      commandLine->removeItem(previous);
//
// Create a genuinely blank item at the end. This is necessary to make sure
// that the last command is available in the history stack via the up-arrow key.
//
    commandLine->addItem("");
  }
  commandLine->setCurrentIndex(commandLine->count() - 1);
  commandLine->setEditText("");
  commandLine->setFocus();
}

void ACode::keyPressEvent(QKeyEvent *event)
{
  if (event->key() == Qt::Key_Return)
    doCommand();
}

void ACode::scrollToBottom()
{
  webView->page()->mainFrame()->
    setScrollBarValue(Qt::Vertical, 
      webView->page()->mainFrame()->scrollBarMaximum(Qt::Vertical));
}


/*====================================================================*/
