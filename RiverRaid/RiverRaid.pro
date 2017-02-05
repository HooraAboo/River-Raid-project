#-------------------------------------------------
#
# Project created by QtCreator 2017-02-04T17:20:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RiverRaid
TEMPLATE = app


SOURCES += main.cpp \
    player.cpp \
    gameengine.cpp \
    enemy.cpp
    bullet.cpp

HEADERS  += \
    player.h \
    gameengine.h \
    enemy.h
    bullet.h
FORMS    +=

RESOURCES += \
    res.qrc
