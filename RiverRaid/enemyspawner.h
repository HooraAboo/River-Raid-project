#ifndef ENEMYSPAWNER_H
#define ENEMYSPAWNER_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QImage>
#include <QObject>
#include <QTimer>
#include <cstdlib>


#include "player.h"
#include "score.h"
#include "health.h"
#include "ship.h"
#include "gameengine.h"

class GameEngine ;

class EnemySpawner : public QObject
{
    Q_OBJECT
private:
    GameEngine* gameEngine ;
public:
    EnemySpawner(GameEngine* engine);
public slots:
    void spawnRandomEnemy() ;
};

#endif // ENEMYSPAWNER_H
