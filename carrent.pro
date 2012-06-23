QT       += core gui

TARGET = carrent
TEMPLATE = app


SOURCES += src/main.cpp\
		src/mainwindow.cpp \
	src/newclient.cpp \
    src/workingwh.cpp \
    src/workwc.cpp \
    src/carback.cpp \
    src/carchange.cpp \
    src/avltree.cpp

HEADERS  += src/mainwindow.h \
	src/newclient.h \
    src/workingwh.h \
    src/workwc.h \
    src/carback.h \
    src/carchange.h \
    src/avltree.h \
    src/avltree.h

FORMS    += src/mainwindow.ui \
	src/newclient.ui \
    src/workwc.ui \
    src/carback.ui
