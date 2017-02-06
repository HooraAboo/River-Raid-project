#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QImage>

class Health: public QGraphicsTextItem {
public:
    Health(QGraphicsScene* scene , int h);
    int getHealthNum();
    void removeHeart();
private:
    int health;
    QGraphicsPixmapItem* heart[10] ; // hahaha! :)))
};

#endif // HEALTH_H
