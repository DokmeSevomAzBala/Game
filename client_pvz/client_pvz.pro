#-------------------------------------------------
#
# Project created by QtCreator 2016-06-24T12:32:57
#
#-------------------------------------------------
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT       += core gui
QT       += network
TARGET = client_pvz
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    client.cpp

HEADERS  += mainwindow.h \
    client.h

FORMS    += mainwindow.ui

RESOURCES += \
    image.qrc
