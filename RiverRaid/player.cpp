#include "player.h"
#include "bullet.h"


Player::Player(string playerName, QGraphicsView* view)
{
    this->view = view ;
    setPixmap(QPixmap(":/images/Player.png").scaled(50 , 50));
    name = playerName;
//    score = new Score(0 , scene());
//    scene()->addItem(score);
    health = new Health(scene(), 3);
    fuel = 10;

    this->setPos(420 , 500);
    //rotate player
    this->setTransformOriginPoint(50,50);
    this->setRotation(-90);
}

void Player::damage()
{
    decreaseHealth();
}

void Player::explodePlayerAndExit()
{
    this->setPixmap(QPixmap(":/images/Explosion.png").scaled(this->pixmap().width()
                                                             , this->pixmap().height()));
    scene()->removeItem(this);
    delete this;
    showLoseDialog();
    return ;

}


void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Right){
        if(pos().x() < view->rect().width()- /*this->pixmap().width()*/310){
            setPos(x()+10 , y());
        } else explodePlayerAndExit();

    }
    else if (event->key() == Qt::Key_Left){
        if(pos().x() > 240){
            setPos(x()-10 , y());
        } else explodePlayerAndExit();

    }
    else if (event->key() == Qt::Key_Space){
        Bullet * bullet = new Bullet();
        bullet->setPos(this->x()+19, this->y()-40);
        scene()->addItem(bullet);
   }
//    else if (event->key() == Qt::Key_Alt){

//    }


}

void Player::showLoseDialog()
{
    cout << "You Lost!!!" << endl ; // TODO : this must be replaced with a proper message !
    QApplication::quit() ;
}

void Player::increaseHealth(){
    int h = health->getHealthNum();
    health->removeHeart();
    delete health ;
    health = new Health(scene(), ++h);
}

void Player::decreaseHealth(){
    int h = health->getHealthNum();
    delete health ;
    if(h > 0){
        health = new Health(scene(), --h);
    }
    else
        explodePlayerAndExit();
}

void Player::increaseScore(int incScore)
{/*
    cout << "increase score called!" << endl ;
    scene()->removeItem(score);
    cout << "score removed!" << endl ;
    int s = this->score->getScore() ;

    delete score ;

    score = new Score(s+incScore , scene()) ;
//    scene()->addItem(score);*/

}


Score *Player::getScore()
{
    return score ;
}

Health *Player::getHealth()
{
    return health ;
}
