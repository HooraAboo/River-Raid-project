#-------------------------------------------------
#
# Project created by QtCreator 2017-02-04T17:20:49
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RiverRaid
TEMPLATE = app


SOURCES += main.cpp \
    player.cpp \
    gameengine.cpp \
    enemy.cpp \
    bullet.cpp \
    score.cpp \
    health.cpp \
    ship.cpp \
    enemyspawner.cpp \
    explosionhandler.cpp \
    fuel.cpp

HEADERS  += \
    player.h \
    gameengine.h \
    enemy.h \
    bullet.h \
    score.h \
    health.h \
    ship.h \
    enemyspawner.h \
    explosionhandler.h \
    fuel.h
FORMS    +=

RESOURCES += \
    res.qrc
