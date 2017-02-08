#ifndef FUELSPAWNER_H
#define FUELSPAWNER_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QImage>
#include <QObject>
#include <QTimer>
#include <cstdlib>
#include <iostream>

#include "player.h"
#include "score.h"
#include "health.h"
#include "ship.h"
#include "gameengine.h"


class GameEngine ;

class FuelSpawner : public QObject
{
    Q_OBJECT

    GameEngine* gameEngine ;
public:
    FuelSpawner(GameEngine* engine);
public slots:
    void fuelSpawner();
};

#endif // FUELSPAWNER_H
