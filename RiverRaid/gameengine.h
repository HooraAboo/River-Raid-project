#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QImage>
#include "player.h"
#include "score.h"

using namespace Qt;

class GameEngine : public QGraphicsView
{
public:
    GameEngine();
};

#endif // GAMEENGINE_H
