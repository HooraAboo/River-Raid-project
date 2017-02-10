#include "fuel.h"

Fuel::Fuel(GameEngine* engine)
{
    this->engine = engine ;
    cout << "fuel created!" << endl ;
    setPixmap(QPixmap(":/images/Fuel.png").scaled(40 , 70));
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
            game->fuel->increaseFuel(3);
//            cout << "Fuel collided with player! fuel : " << endl;
        }
    }

    setPos(x() , y() + engine->getSceneSpeed() ) ;
}

void Fuel::explode()
{
    Player* player = (Player*) scene()->focusItem() ;
//    player->increaseScore(5); // must be replaced with decreaseScore() ;
    int x = this->x() ;
    int y = this->y() ;
    cout << "item removed!" << endl ;
    Explosion* exlosion = new Explosion(x, y, this->scene() , "fuel")  ;
    return ;
}

