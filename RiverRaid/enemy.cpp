#include "enemy.h"

void Enemy::damage()
{
    health-- ;
    if(health <= 0){
        explode();
    }
}

void Enemy::explode()
{
    this->setPixmap(QPixmap(":/images/Explosion.png").scaled(this->pixmap().width() , this->pixmap().height()));
    scene()->removeItem(this);
    delete this;
    return ;

}

void Enemy::move()
{

}

