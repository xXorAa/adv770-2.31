// window.h: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021, licensed
// under GPL (version 3 or later) or the Modified BSD Licence, whichever is
// asserted by the supplied LICENCE file. GPL3 if no licence file.
//
// 04 Mar 20   MLA          First release version
// ?? ??? 08   MLA          Initial coding
//
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>

#include "acode.h"

QT_BEGIN_NAMESPACE
class QAction;
class QMenu;
QT_END_NAMESPACE

class Window : public QMainWindow
{
  Q_OBJECT

public:
  Window();
  ACode *centralWidget;
    
private slots:
  void load();
  void save();
  void aboutHint();
  void aboutPlay();
  void aboutGame();
  void aboutACode();
//  void setFont ();
  void setStyle();
  void setFgColour();
  void setBgColour();
  void choosePrColour();
  void toggleButtons();
  void growFont();
  void shrinkFont();
//  void chooseMargin();
  void saveSettings();
  void restoreSettings();
  void restoreDefaults();
  void closeEvent(QCloseEvent*);
        
protected:
  void resizeEvent(QResizeEvent *);
//    void changeEvent(QEvent *);
    
private:
  int initPhase;
  QMenu *fileMenu;
  QMenu *helpMenu;
  QMenu *viewMenu;
  QAction *loadAct;
  QAction *saveAct;
  QAction *exitAct;
  QAction *hintAct;
  QAction *aboutAct;
  QAction *aboutPlayAct;
  QAction *aboutACodeAct;
  QAction *setFnAct;
  QAction *setPrAct;
  QAction *setFgAct;
  QAction *setBgAct;
  QAction *toggleButtonsAct;
  QAction *setRSAct;
  QAction *setRDAct;
  QAction *zoomInAct;
  QAction *zoomOutAct;
  QAction *setMgAct;
  QAction *settAct;
  QString  bgColourName;
  QString  fgColourName;
  QString  prColourName;
  QSettings settings;
  qreal zoomLevel;
  int baseFontSize;
  QSize windowSize;
        
  QAction *makeAction(const QString&, const char*, const QString&);
  void createActions();
  void createMenus();
  void setColour();
  void getDefaults();
  void updateFonts();
};

#endif

/*====================================================================*/
