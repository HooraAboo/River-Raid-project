#include "wall.h"

QPixmap* Wall::leftWallImage = NULL ;
QPixmap* Wall::rightWallImage = NULL ;
Wall::Wall(GameEngine* gameEngine , char direction)
{
    this->engine = gameEngine ;
    if(direction == 'L'){
        setPixmap(leftWallImage->scaled(120, 200));
//        setPixmap(QPixmap(":/images/Player.png").scaled(50,50));
        setZValue(5);
        setPos(235 , -120);
    }
    else{
        setPixmap(rightWallImage->scaled(120 , 200));
        setZValue(5);
        setPos(525 , -120);
    }

//    cout << "wall created!" << endl ;
    QTimer *timer = new QTimer() ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(25);


}

void Wall::move()
{
    QList<QGraphicsItem*> colliding_Items = collidingItems() ;
    for (int i = 0; i < colliding_Items.size(); ++i) {
        if( typeid(*(colliding_Items[i])) == typeid(Player)){
//            cout << "Enemy collided with player!" ;
//            this->explode();
            Player* player = (Player*) colliding_Items[i] ;
            player->explodePlayerAndExit();
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
