#-------------------------------------------------
#
# Project created by QtCreator 2015-08-02T21:32:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = USBCopyist
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    CommonOptionsWindow.cpp \
    FileCopyist.cpp \
    LoadingFromDiskSettingsWindow.cpp \
    Options.cpp

HEADERS  += MainWindow.h \
    CommonOptionsWindow.h \
    FileCopyist.h \
    LoadingFromDiskSettingsWindow.h \
    Options.h

FORMS    += MainWindow.ui \
    CommonOptionsWindow.ui \
    LoadingFromDiskSettingsWindow.ui
