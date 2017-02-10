#include "enemy.h"

QPixmap* Enemy::rightShipImage = NULL ;
QPixmap* Enemy::leftShipImage = NULL ;
QPixmap* Enemy::rightJetImage = NULL ;
QPixmap* Enemy::leftJetImage = NULL;
QPixmap* Enemy::baloonImage = NULL ;

void Enemy::damage()
{
    health-- ;
    if(health <= 0){
        explode();
        scene()->removeItem(this);
        delete this ;
        return ;

    }
}

void Enemy::explode()
{
    Player* player = (Player*) scene()->focusItem() ;
    player->increaseScore(score);
    int x = this->x() ;
    int y = this->y() ;
    cout << "item removed!" << endl ;
    Explosion* exlosion = new Explosion(x, y, this->scene() , "enemy")  ;
    return ;
}

void Enemy::move()
{
    QList<QGraphicsItem*> colliding_Items = collidingItems() ;
    for (int i = 0; i < colliding_Items.size(); ++i) {
        if( typeid(*(colliding_Items[i])) == typeid(Player)){
            cout << "Enemy collided with player!" ;
            this->explode();
            Player* player = (Player*) colliding_Items[i] ;
            player->getHealth()->decreaseHealth();
            this->scene()->removeItem(this);
            delete this ;
            return ;
        }
        else if(typeid(*colliding_Items[i]) == typeid(Wall)){
            scene()->removeItem(this);
            delete this ;
            return ;
        }
    }

    setPos(x() + normalHorizontalSpeed * speed , y() + engine->getSceneSpeed() ) ;
    if(x() < 240 || x() > (590) ){
//        scene()->removeItem(this);
//        delete this ;
        normalHorizontalSpeed *= -1 ;
        return ;
    }
    if(y() > scene()->height()){
        scene()->removeItem(this);
        delete this ;
        return ;
    }
}

void Enemy::remove()
{
    scene()->removeItem(this);
    delete this;
    return ;
}

