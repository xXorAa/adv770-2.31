QT += core gui widgets webkit webkitwidgets

QMAKE_CFLAGS += -DADVLIB -DQT \
  -Wno-misleading-indentation \
  -Wno-pointer-sign \
  -Wno-unused-but-set-variable \
  -Wno-unused-variable \
  -Wno-unused-parameter \
  -Wno-sign-compare \
  -Wno-implicit-fallthrough \
  -Wno-stringop-truncation \
  -Wno-format-overflow \
  -Wno-maybe-uninitialized

SOURCES += \
  *.cpp \
  *.c

HEADERS += \
  *.h
