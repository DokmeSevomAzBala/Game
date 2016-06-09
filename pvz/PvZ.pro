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
<<<<<<< HEAD
    peashooter.cpp \
    pea.cpp
=======
    gamescreen.cpp \
    pea.cpp \
    peashooter.cpp
>>>>>>> 4f2f156444eb394623d4b5ee6466d80b76a35669

HEADERS  += mainwindow.h \
    zombie.h \
    sunflower.h \
    sun.h \
    plant.h \
    score.h \
<<<<<<< HEAD
    peashooter.h \
    pea.h
=======
    gamescreen.h \
    pea.h \
    peashooter.h
>>>>>>> 4f2f156444eb394623d4b5ee6466d80b76a35669

FORMS    += mainwindow.ui

RESOURCES += \
    pvzresources.qrc

OTHER_FILES +=
