#include "bullet.h"

Bullet::Bullet(){
    this->setPixmap(QPixmap(":/images/Bullet.png").scaled(100 , 100));

    QTimer * timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout(), this, SLOT(move()));
    timer->start(50);
}

void Bullet::move(){

}
