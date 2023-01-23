// acode.h: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021, licensed
// under GPL (version 3 or later) or the Modified BSD Licence, whichever is
// asserted by the supplied LICENCE file. GPL3 if no licence file.
//
// 04 Mar 20   MLA          First release version
// ?? ??? 08   MLA          Initial coding
//
#ifndef ACODE_H
#define ACODE_H

#define RESPONSE -1
#define PROMPT 1

//#include <QList>
#include <QResizeEvent>
#include <QWebView>
#include <QWebFrame>

#include "button.h"

QT_BEGIN_NAMESPACE
class QComboBox;
class QFontComboBox;
class QLabel;
class QLineEdit;
class QTextEdit;
class QPushButton;
QT_END_NAMESPACE

class ACode : public QWidget
{
  Q_OBJECT

  public:
    ACode (QWidget *parent = 0);
    QSize        sizeHint() const;
    void         doCommand();
    void         updateMargin(int);
    void         showResponse(QString, QString);
    void         scrollToBottom();
    void         buttonDisplay();
    void         toggleButtons();
    QComboBox   *commandLine;
    QWebView    *webView;
    QColor       promptColour;
    QColor       textColour;
    QColor       bgColour;
    QLabel      *commandLabel;
    QPushButton *submitButton;
    QPushButton *yesButton;
    QPushButton *noButton;
    QPushButton *maybeButton;
    Button      *exitButton;
//
// Bit 1: may show buttons; bit 2: show submit button; bit 3 (i.e. 4 :-)):
// show yes/no/maybe buttons
//
    int buttonState;
      
   protected:
     void keyPressEvent(QKeyEvent *);
      
   private:
     QLabel *spacerLabel;

   public slots:
     void doIt();

   private slots:
     void yesClicked();
     void noClicked();
     void maybeClicked();
     void exitGame();
};

#endif

/*====================================================================*/
