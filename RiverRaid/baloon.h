#ifndef BALOON_H
#define BALOON_H

#include "enemy.h"
#include <cstdlib>
#include <QTimer>
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class Baloon : public Enemy
{
public:
    Baloon(QGraphicsView* view);
};

#endif // BALOON_H
