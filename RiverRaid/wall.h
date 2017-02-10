#ifndef WALL_H
#define WALL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <typeinfo>
#include <QUuid>

#include "gameengine.h"

class GameEngine ;

class Wall : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
    GameEngine* engine ;
public:
    static QPixmap* leftWallImage ;
    static QPixmap* rightWallImage ;
    Wall(GameEngine* gameEngine , char direction);
public slots:
    void move() ;
};

#endif // WALL_H
