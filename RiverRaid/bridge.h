#ifndef BRIDGE_H
#define BRIDGE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <typeinfo>
#include <QUuid>

#include "gameengine.h"

extern GameEngine* game;

class GameEngine ;

class Bridge : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
    GameEngine* engine ;
public:
    static QPixmap* bridgeImage ;
    Bridge(GameEngine* gameEngine);
    void explode();
public slots:
    void move() ;
};

#endif // BRIDGE_H
