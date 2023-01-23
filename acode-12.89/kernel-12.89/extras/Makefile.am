# Makefile.am: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021, licensed
# under GPL (version 3 or later) or the Modified BSD Licence, whichever is
# asserted by the supplied LICENCE file. GPL3 if no licence file.
#
# 04 Mar 20   MLA          First release version
# ?? ??? 08   MLA          Initial coding
#
AUTOMAKE_OPTIONS = foreign
CFLAGS = -DQT -Wno-unused-but-set-variable -Wno-unused-result \
  -Wno-maybe-uninitialized -DVERSION=\"$(VERSION)\" -DPROG="\"$(PACKAGE)\""
CXXFLAGS = -pipe -std=gnu++0x -O2 -g -pipe -Wformat \
  -Werror=format-security -Wp,-D_FORTIFY_SOURCE=2 -fstack-protector -Wall \
  --param=ssp-buffer-size=4 -fno-strict-aliasing -DPIC -fPIC -std=gnu++11 \
  -W -D_REENTRANT -fPIC -DQT_NO_DEBUG -DQT_WEBKITWIDGETS_LIB -DQT_WIDGETS_LIB \
  -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I. -I. \
  -I/usr/lib64/qt5/include -I/usr/lib64/qt5/include/QtWebKitWidgets \
  -I/usr/lib64/qt5/include/QtWidgets -I/usr/lib64/qt5/include/QtWebKit \
  -I/usr/lib64/qt5/include/QtGui -I/usr/lib64/qt5/include/QtNetwork \
  -I/usr/lib64/qt5/include/QtCore -I. -isystem /usr/include/libdrm \
  -I/usr/lib64/qt5/mkspecs/linux-g++
LDFLAGS = -Wl,-O1 -Wl,-rpath-link,/usr/lib64
LIBS = -lQt5WebKitWidgets -lQt5Widgets -lQt5WebKit -lQt5Gui -lQt5Core -lpthread
EXTRA_DIST = {GAME}.png {GAME}.desktop

bin_PROGRAMS = {GAME}
{GAME}_SOURCES = {SOURCES}
