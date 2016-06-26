#-------------------------------------------------
#
# Project created by QtCreator 2016-05-28T22:29:59
#
#-------------------------------------------------

#QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

QT       += core gui network multimedia

#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia

TARGET = PvZ
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    zombie.cpp \
    sunflower.cpp \
    sun.cpp \
    plant.cpp \
    score.cpp \
    gamescreen.cpp \
    pea.cpp \
    peashooter.cpp \
    walnut.cpp \
    level.cpp \
    lawn_mower.cpp \
    timerthread.cpp



HEADERS  += mainwindow.h \
    zombie.h \
    sunflower.h \
    sun.h \
    plant.h \
    score.h \
    pea.h \
    peashooter.h \
    gamescreen.h \
    walnut.h\
    level.h \
    lawn_mower.h \
    timerthread.h

FORMS  += mainwindow.ui

RESOURCES += \
    pvzresources.qrc
