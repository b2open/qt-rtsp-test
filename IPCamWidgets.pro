QT       += core gui
QT       += widgets
QT       += network
QT       += multimediawidgets

CONFIG   += c++11

TARGET = IPCamWidgets
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
