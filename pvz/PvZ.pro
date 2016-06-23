#-------------------------------------------------
#
# Project created by QtCreator 2016-05-28T22:29:59
#
#-------------------------------------------------

#QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT       += core gui

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
    drag.cpp \
    walnut.cpp



HEADERS  += mainwindow.h \
    zombie.h \
    sunflower.h \
    sun.h \
    plant.h \
    score.h \
    pea.h \
    peashooter.h \
    gamescreen.h \
    drag.h \
    walnut.h


FORMS    += mainwindow.ui

RESOURCES += \
    pvzresources.qrc

OTHER_FILES +=
