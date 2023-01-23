// button.h: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021, licensed
// under GPL (version 3 or later) or the Modified BSD Licence, whichever is
// asserted by the supplied LICENCE file. GPL3 if no licence file.
//
// 04 Mar 20   MLA          First release version
// ?? ??? 08   MLA          Initial coding
//
#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>

class Button : public QPushButton
{
       Q_OBJECT
       
       public:
           Button(const QString &text, const QColor &color, QWidget *parent = 0);
           
};

#endif

