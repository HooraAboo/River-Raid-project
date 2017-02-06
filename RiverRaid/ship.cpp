#include "ship.h"



Ship::Ship(QGraphicsView *view)
{
    this->view = view ;
    this->health = 2 ;
    this->speed = 0 ;
    int sceneWidth = 800; //this must be fixed!
    int randomX = (rand()% sceneWidth) ;
//    if(rand()%2){
//    cout << randomX ;
//    QPixmap pic(":/image/Player.png") ;
//    pic.scaled(40 , 40) ;
    setPixmap(shipImage->scaled(30 , 30));
//    cout << pic.colorCount() ;
//        setPixmap(pic);
        setPos(randomX , 0) ;
//    }


    QTimer *timer = new QTimer() ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(25);

}
