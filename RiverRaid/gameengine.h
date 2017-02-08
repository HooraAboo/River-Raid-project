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


#include "player.h"
#include "score.h"
#include "health.h"
#include "ship.h"
#include "spawner.h"
#include "fuel.h"


using namespace Qt;


class GameEngine : public QGraphicsView
{
    QList<Enemy*> enemies ;
    Player* player ;
    Score * score ;
    Health * health ;
public:
    GameEngine();
};

#endif // GAMEENGINE_H
