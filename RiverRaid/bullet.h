#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsScene>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QList>
#include <QApplication>
#include <typeinfo>



class Bullet: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bullet();
    bool isEnemy(QGraphicsItem* item);
public slots:
    void move();
};

#endif // BULLET_H
