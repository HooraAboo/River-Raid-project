#include "bullet.h"

Bullet::Bullet(){
    this->setPixmap(QPixmap(":/images/Bullet.png").scaled(30 , 30));
    setTransformOriginPoint(50,50);
    setRotation(-90);

    QTimer * timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout(), this, SLOT(move()));
    timer->start(50);
}

void Bullet::move(){

}
