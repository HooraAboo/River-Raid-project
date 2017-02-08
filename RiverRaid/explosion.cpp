#include "explosion.h"

Explosion::Explosion(int x , int y , QGraphicsScene* scene)
{
    this->setPixmap(QPixmap(":/images/Explosion.png").scaled(50 ,50));
    setPos(x, y);
    scene->addItem(this);
    QTimer* timer = new QTimer();
    connect(timer , SIGNAL(timeout()) ,this, SLOT(move()) ) ;
    timer->start(25); ;
//    cout << "singleshot is going to be called!" << endl ;
    QTimer::singleShot(500 , this , SLOT(remove())) ;
    return ;
}

void Explosion::move()
{
    setPos(x() , y() + 2) ;
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

void Explosion::remove()
{
    scene()->removeItem(this);
    delete this;
    return ;
}

