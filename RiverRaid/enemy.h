#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <typeinfo>
#include <QUuid>

#include "explosion.h"
#include "gameengine.h"

class GameEngine ;

class Enemy: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
protected:
    GameEngine* engine ;
    double normalHorizontalSpeed ;

    double speed ;
    int health ;
    char direction ;
    QGraphicsView* view ;

public:
    int score ;
    static QPixmap* rightShipImage;
    static QPixmap* leftShipImage;
    static QPixmap* rightJetImage ;
    static QPixmap* leftJetImage ;
    static QPixmap* baloonImage ;
    void explode();
    void damage() ;

public slots:
    virtual void move() ;
    void remove();

};


#endif // ENEMY_H
