#include "bullet.h"
#include "ship.h"
#include "baloon.h"
#include "jet.h"
#include "fuel.h"

Bullet::Bullet(){
    this->setPixmap(QPixmap(":/images/Bullet.png").scaled(12 , 12));
    setTransformOriginPoint(50,50);
    setRotation(-90);

    QTimer * timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(20);
}

bool Bullet::isEnemy(QGraphicsItem* item)
{
    if(typeid(*item) == typeid(Ship)
            || typeid(*item) == typeid(Baloon)
            || typeid(*item) == typeid(Jet)
            )
    {
        return true ;
    }
    return false ;
}

void Bullet::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i < colliding_items.size(); ++i){
        if (isEnemy(colliding_items[i])){
            cout << "Bullet collided with enemy!" << endl ;
            Enemy* enemy = (Enemy*) colliding_items[i] ;
            enemy->damage();
            scene()->removeItem(this);
            delete this;
            return;
        }
        else if(typeid(*colliding_items[i]) == typeid(Fuel))
        {
            cout << "bullet collided with Fuel tank" << endl ;
            Fuel* fuel = (Fuel*) colliding_items[i] ;
            fuel->explode();
            scene()->removeItem(fuel);
            delete fuel ;
            scene()->removeItem(this);
            delete this ;
            return ;
        }
    }

    this->setPos(x(), y()-15);
    if(this->pos().y() < 0){
         scene()->removeItem(this);
         delete this;
    }
}
