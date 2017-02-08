#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QImage>
#include <iostream>

using namespace std ;
class Health: public QGraphicsTextItem {
public:
    Health(QGraphicsScene* scene , int h);
    int getHealthNum();
    void removeHeart();
    void decreaseHealth();
private:
    int health;
    QGraphicsPixmapItem* heart[10] ; // hahaha! :)))
};

#endif // HEALTH_H
