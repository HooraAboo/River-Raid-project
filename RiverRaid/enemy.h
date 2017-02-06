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
    int sceneSpeed = 5 ;
    int normalHorizontalSpeed = 5 ;
    int speed ;
    int health ;
    char direction ;
    QGraphicsView* view ;
public:

    static QPixmap* shipImage;
    static QPixmap chopperImage ;
    static QPixmap jetImage ;

    void damage() ;
    void explode();

public slots:
    void move() ;
};


#endif // ENEMY_H
