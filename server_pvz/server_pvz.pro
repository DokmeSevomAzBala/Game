#-------------------------------------------------
#
# Project created by QtCreator 2016-06-24T11:16:46
#
#-------------------------------------------------
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT       += core gui
QT       += network

TARGET = server_pvz
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    server.cpp

HEADERS  += mainwindow.h \
    server.h

FORMS    += mainwindow.ui
