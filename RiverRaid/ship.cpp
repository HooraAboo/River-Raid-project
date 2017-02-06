#include "ship.h"



Ship::Ship(QGraphicsView *view)
{
    this->view = view ;
    this->health = 2 ;
    this->speed = 0 ;
    int sceneWidth = 800; //this must be fixed!
    int randomX = (rand()% sceneWidth) ;
//    if(rand()%2){
        setPixmap(QPixmap(":/image/Ship.png"));
//    }

    QTimer *timer = new QTimer(this) ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(50);

}
