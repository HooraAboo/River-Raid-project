#ifndef FUEL_H
#define FUEL_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QTimer>
#include <QPixmap>
#include <QList>
#include <iostream>

#include "gameengine.h"

class GameEngine ;

class Fuel: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT

public:
    Fuel(GameEngine* engine);
    void explode();

public slots:
    void move();
private:
    GameEngine* engine ;
};

#endif // FUEL_H
