#ifndef JET_H
#define JET_H


#include "enemy.h"
#include <cstdlib>
#include <QTimer>
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class Jet : public Enemy
{
public:
    Jet(QGraphicsView* view);
public slots :
    virtual void move();
};


#endif // JET_H
