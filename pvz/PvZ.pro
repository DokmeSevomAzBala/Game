#-------------------------------------------------
#
# Project created by QtCreator 2016-05-28T22:29:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PvZ
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plants.cpp \
    zombie.cpp

HEADERS  += mainwindow.h \
    plants.h \
    zombie.h

FORMS    += mainwindow.ui
