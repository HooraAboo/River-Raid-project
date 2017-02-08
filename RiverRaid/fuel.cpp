#include "fuel.h"

Fuel::Fuel(QGraphicsView* view)
{
    this->view = view ;
    cout << "fuel created!" << endl ;
    setPixmap(QPixmap(":/images/Fuel.png").scaled(70 , 120));
    int sceneWidth = 350; //this must be fixed!
    int randomX = (rand()% sceneWidth + 240) ;
    setPos(randomX , 0) ;

    QTimer *timer = new QTimer() ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(25);
}

void Fuel::move(){
    QList<QGraphicsItem*> colliding_Items = collidingItems() ;
    for (int i = 0; i < colliding_Items.size(); ++i) {
        if( typeid(*(colliding_Items[i])) == typeid(Player)){
            Player* player = (Player*) colliding_Items[i] ;
            player->fuel += 5 ;
            cout << "Fuel collided with player! fuel : "
                 << player->fuel << endl;
        }
    }

    setPos(x() , y() + 2 ) ;
}

void Fuel::explode(){
    this->setPixmap(QPixmap(":/images/Explosion.png").scaled(this->pixmap().width() , this->pixmap().height()));
    return;
}
