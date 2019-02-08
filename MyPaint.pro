QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyPaint
TEMPLATE = app


SOURCES += main.cpp\
        paint.cpp \
    scenepaint.cpp

HEADERS  += paint.h \
    scenepaint.h

FORMS    += paint.ui
