#include "baloon.h"

Baloon::Baloon(QGraphicsView* view)
{
    this->view = view ;
    this->health = 1 ;
    this->score = 1 ;
    this->speed = 0.5 ;

    int rand = qrand();
    if(rand % 2) this->normalHorizontalSpeed *= -1 ;

    int sceneWidth = 350; //this must be fixed!
    int randomX = (qrand()% sceneWidth + 240) ;

//    setPixmap(baloonImage->scaled(40 , 40));

    setPixmap(baloonImage->scaled(40,40));
    setPos(randomX , 0) ;

    QTimer *timer = new QTimer() ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(25);
}

Baloon::Baloon()
{

}
