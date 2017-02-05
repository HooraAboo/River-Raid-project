#include "player.h"
#include "bullet.h"


Player::Player(string playerName, QGraphicsView* view)
{
    this->view = view ;
    setPixmap(QPixmap(":/images/Player.png").scaled(100 , 100));
    name = playerName;
    score = 0;
    health = 3;
    fuel = 10;
    //setPos(view->width()/2,view->height() - this->pixmap().height());
    setPos(350 , 500);
    setTransformOriginPoint(50,50);
    setRotation(-90);
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Right){
        if(pos().x() > 0){
            setPos(x()+10 , y());
        }

    }
    else if (event->key() == Qt::Key_Left){
        if(pos().x() < view->rect().width() - this->pixmap().width() ){
            setPos(x()-10 , y());
        }
    }
    else if (event->key() == Qt::Key_Space){
        Bullet * bullet = new Bullet();
        bullet->setPos(this->x()+50, this->y());
        scene()->addItem(bullet);
   }
//    else if (event->key() == Qt::Key_Alt){

//    }


}
