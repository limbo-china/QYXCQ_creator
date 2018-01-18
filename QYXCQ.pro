#-------------------------------------------------
#
# Project created by QtCreator 2018-01-17T22:51:48
#
#-------------------------------------------------

QT       += core network declarative widgets gui qml quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QYXCQ
TEMPLATE = app
CONFIG += debug console
TRANSLATIONS += qyxcq_zh.ts
DEPENDPATH += ./
DESTDIR = ../QYXCQ

SOURCES += main.cpp\
        qyxcq.cpp \
    Card.cpp \
    cardOverViewDialog.cpp \
    Engine.cpp \
    gamecore.cpp \
    Package.cpp \
    player.cpp \
    startDialog.cpp \
    dashboard.cpp

HEADERS  += qyxcq.h \
    cardOverViewDialog.h \
    Engine.h \
    gamecore.h \
    Package.h \
    player.h \
    QtHeader.h \
    startDialog.h \
    Card.h \
    ui_cardOverView.h \
    ui_QYXCQ.h \
    ui_startDialog.h \
    dashboard.h

FORMS    += qyxcq.ui \
    cardOverView.ui \
    startDialog.ui

OTHER_FILES += \
    qyxcq_zh.ts

RESOURCES += \
    QYXCQ.qrc
