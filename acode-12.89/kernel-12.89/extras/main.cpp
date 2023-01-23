// main.cpp: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021, licensed
// under GPL (version 3 or later) or the Modified BSD Licence, whichever is
// asserted by the supplied LICENCE file. GPL3 if no licence file.
//
// 04 Mar 20   MLA          First release version
// ?? ??? 08   MLA          Initial coding
//
#include <QtWidgets>
#include "window.h"
#include "defaults.h"

int main(int argc, char * argv[])
{
  QApplication app(argc, argv);
  Window *window = new Window;
  window->show();
  return app.exec();
}

/*====================================================================*/

