#ifndef SHIP_H
#define SHIP_H

#include <cstdlib>
#include <QTimer>
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

#include "enemy.h"

class Ship : public Enemy
{
public:
    Ship(QGraphicsView* view);
};

#endif // SHIP_H
