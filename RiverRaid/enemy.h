#ifndef ENEMY_H
#define ENEMY_H

#include "player.h"
#include "explosion.h"

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <typeinfo>
class Enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
protected:
    int sceneSpeed = 2.5 ;
    int normalHorizontalSpeed = 1;
    int score ;
    int speed ;
    int health ;
    char direction ;
    QGraphicsView* view ;
public:

    static QPixmap* shipImage;
    static QPixmap chopperImage ;
    static QPixmap jetImage ;
    void explode();
    void damage() ;

public slots:
    void move() ;
    void remove();

};


#endif // ENEMY_H
