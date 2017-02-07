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

#include "player.h"

class Fuel: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Fuel(QGraphicsView*);
    void explode();

public slots:
    void move();
private:
    QGraphicsView* view;
};

#endif // FUEL_H
