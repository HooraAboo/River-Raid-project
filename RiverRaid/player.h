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
#include <QMediaPlayer>

#include "health.h"
#include "score.h"
#include "bullet.h"

using namespace std;

class Player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    string name;
    Health* health;
    Score* score;
    QGraphicsView* view ;

public:

        int fuel;

    Player(string, QGraphicsView*);
    void damage() ;
    void explodePlayerAndExit() ;
    void keyPressEvent(QKeyEvent * event);
    void showLoseDialog();
    void increaseHealth();
    void decreaseHealth();
    void increaseScore(int incScore) ;
//    void decreaseScore();
    Score* getScore();
    Health* getHealth();
private:
    QMediaPlayer* bulletsound;
};

#endif // PLAYER_H
