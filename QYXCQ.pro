#-------------------------------------------------
#
# Project created by QtCreator 2018-01-17T22:51:48
#
#-------------------------------------------------

QT       += core network widgets gui qml quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QYXCQ
TEMPLATE = app
CONFIG += debug console
TRANSLATIONS += qyxcq_zh.ts
DEPENDPATH += ./
DESTDIR = ../QYXCQ

SOURCES += main.cpp\
        qyxcq.cpp \
    gamecore.cpp \
    player.cpp \
    dashboard.cpp \
    carditem.cpp \
    card.cpp \
    cardoverviewdialog.cpp \
    engine.cpp \
    package.cpp \
    startdialog.cpp \
    custombutton.cpp

HEADERS  += qyxcq.h \
    gamecore.h \
    player.h \
    QtHeader.h \
    ui_cardOverView.h \
    ui_QYXCQ.h \
    ui_startDialog.h \
    dashboard.h \
    carditem.h \
    card.h \
    cardoverviewdialog.h \
    engine.h \
    package.h \
    startdialog.h \
    custombutton.h

FORMS    += qyxcq.ui \
    cardOverView.ui \
    startDialog.ui

OTHER_FILES += \
    qyxcq_zh.ts

RESOURCES += \
    QYXCQ.qrc
