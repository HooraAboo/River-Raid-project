#include "bridge.h"

QPixmap* Bridge::bridgeImage = NULL ;

Bridge::Bridge(GameEngine* engine)
{
    this->engine = engine ;
    setPixmap(bridgeImage->scaled(170 , 55));
    setZValue(4);
    setPos(355 , 10);


    cout << "Bridge created!" << endl ;
    QTimer *timer = new QTimer() ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(25);

}

void Bridge::move()
{
    QList<QGraphicsItem*> colliding_Items = collidingItems() ;
    for (int i = 0; i < colliding_Items.size(); ++i) {
        if( typeid(*(colliding_Items[i])) == typeid(Player)){
            cout << "Bridge collided with player!" ;
//            this->explode();
            Player* player = (Player*) colliding_Items[i] ;
            player->getHealth()->decreaseHealth();
            this->scene()->removeItem(this);
            delete this ;
            return ;
        }
    }

    setPos(x() , y() + engine->getSceneSpeed()) ;

    if(y() > scene()->height()){
        scene()->removeItem(this);
        delete this ;
        return ;
    }

}


