#ifndef ENEMY_H
#define ENEMY_H

#include "player.h"

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QList>

#include <typeinfo>
class Enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
protected:
    int sceneSpeed = 20 ;
    int normalHorizontalSpeed = 20 ;
    int speed ;
    int health ;
    char direction ;
    QGraphicsView* view ;
public:
    void damage() ;
    void explode();
public slots:
    void move() ;
};

#endif // ENEMY_H
