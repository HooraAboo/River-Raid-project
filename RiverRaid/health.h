#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QImage>

class Health: public QGraphicsTextItem {
public:
    Health();
    void increase();
    void decrease();
private:
    int health;
    QGraphicsPixmapItem* heart[3] ;
};

#endif // HEALTH_H
