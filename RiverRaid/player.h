#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <string>
#include <QPixmap>
#include <QKeyEvent>
#include <iostream>
#include "health.h"


using namespace std;

class Player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    string name;
    Health* health;
    int score;
    int fuel;
    QGraphicsView* view ;

public:
    Player(string, QGraphicsView*);
    void damage() ;
    void explodePlayerAndExit() ;
    void keyPressEvent(QKeyEvent * event);
    void showLoseDialog();
    void increaseHealth();
    void decreaseHealth();
};

#endif // PLAYER_H
