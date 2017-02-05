#include "ship.h"



Ship::Ship(QGraphicsView *view)
{
    this->health = 2 ;
    this->speed = 0 ;
    int randomX = (rand()% (int) scene()->width()) ;
//    if(rand()%2){
        setPixmap(QPixmap(":/image/Ship.png"));
//    }

    QTimer *timer = new QTimer(this) ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(50);

}
