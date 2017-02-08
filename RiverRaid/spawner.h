#ifndef SPAWNER_H
#define SPAWNER_H

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
#include "fuel.h"

class Spawner: public QObject
{
    Q_OBJECT
private:
    GameEngine* gameEngine ;
public:
    Spawner(GameEngine* engine);
public slots:
    void spawnRandom() ;
};

#endif // SPAWNER_H
