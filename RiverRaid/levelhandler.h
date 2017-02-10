#ifndef LEVELHANDLER_H
#define LEVELHANDLER_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QImage>
#include <QObject>
#include <QTimer>
#include <cstdlib>
#include <iostream>

#include "gameengine.h"

class GameEngine ;


class levelHandler : public QObject
{
    Q_OBJECT
    GameEngine* engine ;
public:
    levelHandler(GameEngine* engine);
public slots:
    void nextLevel();
};

#endif // LEVELHANDLER_H
