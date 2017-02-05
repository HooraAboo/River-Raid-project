#include "player.h"


Player::Player(string playerName, QGraphicsView* view)
{
    this->view = view ;
    setPixmap(QPixmap(":/images/Player.png"));
    name = playerName;
    score = 0;
    health = 3;
    fuel = 10;
    setPos(view->width()/2,view->height() - this->pixmap().height());
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left){
        if(pos().x() > 0){
            setPos(x()-5 , y());
        }

    }
    else if (event->key() == Qt::Key_Right){
        if(pos().x() < view->rect().width() - this->pixmap().width() ){
            setPos(x()+5 , y());
        }
    }
    else if (event->key() == Qt::Key_Space){

    }
    else if (event->key() == Qt::Key_Alt){

    }


}
