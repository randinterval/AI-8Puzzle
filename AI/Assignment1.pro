#-------------------------------------------------------------------|
#                                                                   |
# Project created by QtCreator 2015-05-7 T23:43:54 on Ubuntu 15.04  |
#                                                                   |
#-------------------------------------------------------------------|

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Assignment1
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        home.cpp \
        Algorithms.cpp\
        Tree.cpp \
    treegeneration.cpp

HEADERS  += home.h \
    treegeneration.h \
    Algorithms.h \
    Tree.h \
    headers.h

FORMS    += home.ui \
    treegeneration.ui

RESOURCES += \
    files.qrc
