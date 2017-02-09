#include "baloon.h"

Baloon::Baloon(QGraphicsView* view)
{
    this->view = view ;
    this->health = 1 ;
    this->score = 1 ;
    this->speed = 0.5 ;
    int sceneWidth = 350; //this must be fixed!
    int randomX = (rand()% sceneWidth + 240) ;

//    setPixmap(baloonImage->scaled(40 , 40));

    setPixmap(shipImage->scaled(40,40));
    setPos(randomX , 0) ;

    QTimer *timer = new QTimer() ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(25);
}
