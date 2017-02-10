#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QImage>
#include <QObject>
#include <QTimer>
#include <cstdlib>
#include <QMediaPlayer>
#include <QMediaPlaylist>

#include "player.h"
#include "score.h"
#include "health.h"
#include "spawner.h"
#include "fuel.h"
#include "enemyspawner.h"
#include "bullet.h"
#include "enemy.h"
#include "levelhandler.h"
#include "wall.h"
#include "bridge.h"
using namespace Qt;

class Enemy ;
class Player ;

class GameEngine : public QGraphicsView
{
    QList<Enemy*> enemies ;
    Player* player ;
    Score * score ;
    Health * health ;

public:
    static double sceneSpeed  ;
    static double normalHorizontalSpeed ;
    GameEngine();
    double getSceneSpeed();
    double getNormalHorizontalSpeed();
};

#endif // GAMEENGINE_H
