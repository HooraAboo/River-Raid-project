#include "bullet.h"
#include "ship.h"
Bullet::Bullet(){
    this->setPixmap(QPixmap(":/images/Bullet.png").scaled(12 , 12));
    setTransformOriginPoint(50,50);
    setRotation(-90);

    QTimer * timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(20);
}

void Bullet::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i < colliding_items.size(); ++i){
        if (typeid(*(colliding_items[i])) == typeid(Ship)){
            cout << "Bullet collided with enemy!" << endl ;
            Enemy* enemy = (Enemy*) colliding_items[i] ;
            enemy->damage();
            scene()->removeItem(this);
            delete this;
            return;
        }
    }

    this->setPos(x(), y()-15);
    if(this->pos().y() < 0){
         scene()->removeItem(this);
         delete this;
    }
}
