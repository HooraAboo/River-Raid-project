#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsScene>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QList>
#include <QApplication>
#include <typeinfo>

#include <gameengine.h>

extern GameEngine* game;


class Bullet: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bullet();
    bool isEnemy(QGraphicsItem* item);
    static int bulletCount;
public slots:
    void move();
};

#endif // BULLET_H
