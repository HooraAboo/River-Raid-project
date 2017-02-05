#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>

class Enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
protected:
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
