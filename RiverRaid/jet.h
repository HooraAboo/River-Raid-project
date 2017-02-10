#ifndef JET_H
#define JET_H


#include <cstdlib>
#include <QTimer>
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include "gameengine.h"

#include "enemy.h"

extern GameEngine* game;

class Enemy ;

class Jet : public Enemy
{
public:
    Jet(QGraphicsView* view);
public slots :
    virtual void move();
};


#endif // JET_H
