QT       += core gui

TARGET = carrent
TEMPLATE = app


SOURCES += src/main.cpp\
		src/mainwindow.cpp \
	src/newclient.cpp \
    src/wwithcars.cpp \
    src/workingwh.cpp \
    src/workwc.cpp \
    src/carback.cpp \
    src/wwithcars.cpp

HEADERS  += src/mainwindow.h \
	src/newclient.h \
    src/wwithcars.h \
    src/workingwh.h \
    src/workwc.h \
    src/carback.h

FORMS    += src/mainwindow.ui \
	src/newclient.ui \
    src/workwc.ui \
    src/carback.ui
