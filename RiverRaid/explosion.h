#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "player.h"
#include "enemy.h"
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <typeinfo>

class Enemy ;

class Explosion: public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Explosion(int x , int y , QGraphicsScene* scene);
public slots:
    void move();
    void remove() ;
};

#endif // EXPLOSION_H
