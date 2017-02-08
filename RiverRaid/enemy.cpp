#include "enemy.h"


QPixmap* Enemy::shipImage = NULL;

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
    Explosion* exlosion = new Explosion(x, y, this->scene())  ;
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
    }

    setPos(x() + normalHorizontalSpeed * speed , y() + sceneSpeed ) ;
    if(x() < 0 || x() > scene()->width()){
        scene()->removeItem(this);
        delete this ;
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

