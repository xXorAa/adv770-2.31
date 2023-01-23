# configure.ac: A-code Qt5 wrapper - copyright Mike Arnautov 2008-2021,
# licensed under GPL (version 3 or later) or the Modified BSD Licence,
# whichever is asserted by the supplied LICENCE file. GPL3 if no licence file.
#
# 04 Mar 20   MLA          First release version
# ?? ??? 08   MLA          Initial coding
#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([{GAME}], [{VERSION}], [{EMAIL}])
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_SRCDIR([main.cpp])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

# Checks for libraries.
AC_CHECK_LIB([readline], [readline, add_history], [HAVE_READLINE=yes], [HAVE_READLINE=no])
AM_CONDITIONAL([USE_READLINE], [test "${HAVE_READLINE}" = yes])
AC_CHECK_LIB([Qt5Core], [main])
AC_CHECK_LIB([Qt5Gui], [main])
AC_CHECK_LIB([Qt5WebKit], [main])
AC_CHECK_LIB([Qt5WebKitWidgets], [main])
AC_CHECK_LIB([Qt5Widgets], [main])
AC_CHECK_LIB([pthread], [main])

# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h fcntl.h netdb.h netinet/in.h stdlib.h string.h sys/socket.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL

# Checks for library functions.
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([getcwd memset mkdir select socket strchr strrchr strstr strtol])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
