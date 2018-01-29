#-------------------------------------------------
#
# Project created by QtCreator 2018-01-17T22:51:48
#
#-------------------------------------------------

QT       += core network widgets gui qml quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QYXCQ
TEMPLATE = app
CONFIG += debug release console
TRANSLATIONS += qyxcq_zh.ts
#DEPENDPATH += ./
DESTDIR = ../QYXCQ

#LIBS += -L$$PWD/lib/ -lfmod64_vc \
#    -lfmod64_vcd

SOURCES += core/dashboard.cpp \
    core/gamecore.cpp \
    core/gamescene.cpp \
    core/main.cpp \
    core/player.cpp \
    core/qyxcq.cpp \
    dialog/cardoverviewdialog.cpp \
    dialog/startdialog.cpp \
    package/card.cpp \
    package/package.cpp \
    ui/carditem.cpp \
    ui/custombutton.cpp \
    ui/customlabel.cpp \
    package/basiccards.cpp \
    package/skillcards.cpp \
    package/equipcards.cpp \
    core/audio.cpp \
    package/general.cpp \
    ui/generalitem.cpp \
    ui/clickableitem.cpp \
    ui/selectableitem.cpp

HEADERS  += core/dashboard.h \
    core/gamecore.h \
    core/gamescene.h \
    core/player.h \
    core/QtHeader.h \
    core/QYXCQ.h \
    dialog/cardoverviewdialog.h \
    dialog/startdialog.h \
    package/card.h \
    package/package.h \
    ui/carditem.h \
    ui/custombutton.h \
    ui/customlabel.h \
    package/basiccards.h \
    package/skillcards.h \
    package/equipcards.h \
    inc/fmod.h \
    inc/fmod_common.h \
    inc/fmod_codec.h \
    inc/fmod_dsp.h \
    inc/fmod_dsp_effects.h \
    inc/fmod_errors.h \
    inc/fmod_output.h \
    core/audio.h \
    package/general.h \
    ui/generalitem.h \
    ui/clickableitem.h \
    ui/selectableitem.h

FORMS    += qyxcq.ui \
    cardOverView.ui \
    startDialog.ui

OTHER_FILES += \
    qyxcq_zh.ts

RESOURCES += \
    QYXCQ.qrc




win32:CONFIG(release, debug|release): LIBS += -L$$PWD/lib/ -lfmod64_vc
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/lib/ -lfmod64_vcd

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/lib/libfmod64_vc.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/lib/libfmod64_vcd.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/lib/fmod64_vc.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/lib/fmod64_vcd.lib
