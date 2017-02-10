#include "ship.h"



Ship::Ship(QGraphicsView *view)
{
    this->view = view ;
    this->health = 2 ;
    this->score = 2 ;
    this->speed = 0.5 ;
    this->normalHorizontalSpeed = engine->getNormalHorizontalSpeed() ;
    int sceneWidth = 350; //this must be fixed!
    int randomX = (qrand()% sceneWidth + 240) ;

    if(qrand() % 2){
        setPixmap(rightShipImage->scaled(40 , 40));
    }
    else{
        setPixmap(leftShipImage->scaled(40 , 40));
        this->normalHorizontalSpeed *= -1 ;
    }
    setPos(randomX , 0) ;

    QTimer *timer = new QTimer() ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(25);

}
