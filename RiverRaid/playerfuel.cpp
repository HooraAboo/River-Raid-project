#include "playerfuel.h"
#include "player.h"
#include <QTimer>
PlayerFuel::PlayerFuel(QGraphicsScene* scene , int initial)
{
    this->fuel = initial ;
    this->setPos(x() , y() + 65);
    setPlainText(QString("Fuel: ") + QString::number(fuel) ) ;

    QTimer* timer = new QTimer() ;

    connect(timer , SIGNAL(timeout()) , this , SLOT(useFuel() )) ;
    timer->start(100);

}

void PlayerFuel::increaseFuel(int amount)
{
    fuel += amount ;
    setPlainText(QString("Fuel: ") + QString::number(fuel));
}

void PlayerFuel::useFuel()
{
    fuel -= 2 ;
     setPlainText(QString("Fuel: ") + QString::number(fuel));
     if(fuel <= 0){
         Player* player = (Player*) scene()->focusItem() ;
         player->explodePlayerAndExit();
     }
}



