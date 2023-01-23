// button.cpp: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021, licensed
// under GPL (version 3 or later) or the Modified BSD Licence, whichever is
// asserted by the supplied LICENCE file. GPL3 if no licence file.
//
// 04 Mar 20   MLA          First release version
// ?? ??? 08   MLA          Initial coding
//
#include <QtWidgets>

#include "button.h"

Button::Button(const QString &text, const QColor &color, QWidget *parent)
    : QPushButton(parent)
{
    setText(text);
    QPalette newPalette = palette();
    newPalette.setColor(QPalette::Button, color);
    setPalette(newPalette);
}

/*====================================================================*/
