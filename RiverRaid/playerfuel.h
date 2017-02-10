#ifndef PLAYERFUEL_H
#define PLAYERFUEL_H

#include <QGraphicsTextItem>
#include <QFont>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QImage>
#include <iostream>
#include <QObject>


using namespace std ;

class PlayerFuel : public QGraphicsTextItem
{
    Q_OBJECT
    int fuel ;
public:
    PlayerFuel(QGraphicsScene* scene , int initial);
    void increaseFuel(int amount) ;
public slots:
//    void showFuelEmptyDialog();
    void useFuel() ;
};

#endif // PLAYERFUEL_H
