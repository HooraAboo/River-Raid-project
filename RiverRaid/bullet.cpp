#include "bullet.h"

Bullet::Bullet(){
    this->setPixmap(QPixmap(":/images/Bullet.png").scaled(20 , 20));
    setTransformOriginPoint(50,50);
    setRotation(-90);

    QTimer * timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
}

void Bullet::move(){
   this->setPos(x(), y()-10);
   if(this->pos().y() < 0){
       scene()->removeItem(this);
       delete this;
   }
}
