#include "player.h"

extern GameEngine* game;

Player::Player(string playerName, QGraphicsView* view)
{
    this->view = view ;
    //set image
    setPixmap(QPixmap(":/images/Player.png").scaled(50 , 50));

    name = playerName;
//    score = new Score(0 , scene());
//    scene()->addItem(score);
    health = new Health(scene(), 3);
    fuel = 200;

    //set pos
    this->setPos(420 , 500);

    //rotate player
    this->setTransformOriginPoint(50,50);
    this->setRotation(-90);

    //bullet sound
    bulletSound = new QMediaPlayer();
    bulletSound->setMedia(QUrl("qrc:/soundtrack/Bullet.aiff"));
}

//void Player::damage()
//{
//    decreaseHealth();
//}

void Player::explodePlayerAndExit()
{
    this->setPixmap(QPixmap(":/images/Explosion.png").scaled(this->pixmap().width()
                                                             , this->pixmap().height()));
//    scene()->removeItem(this);
//    delete this;
    showLoseDialog();
    return ;

}


void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Right){
        if(pos().x() < view->rect().width()- /*this->pixmap().width()*/310){
            setPos(x()+10 , y());
        } else {
            game->health->decreaseHealth();
            explodePlayerAndExit();
            setPixmap(QPixmap(":/images/Player.png").scaled(50 , 50));
        }
    }
    else if (event->key() == Qt::Key_Left){
        if(pos().x() > 240){
            setPos(x()-10 , y());
        } else {
            game->health->decreaseHealth();
            explodePlayerAndExit();
            setPixmap(QPixmap(":/images/Player.png").scaled(50 , 50));
        }

    }
    else if (event->key() == Qt::Key_Space){
        if(Bullet::bulletCount < 5){
            Bullet * bullet = new Bullet();
            cout << Bullet::bulletCount << "   " ;
            Bullet::bulletCount ++;
            cout << Bullet::bulletCount << endl ;
            bullet->setPos(this->x()+19, this->y()-40);
            scene()->addItem(bullet);

            //play bullet sound
            if (bulletSound->state() == QMediaPlayer::PlayingState){
                bulletSound->setPosition(0);
            }
            else if (bulletSound->state() == QMediaPlayer::StoppedState){
                bulletSound->play();
            }
        }

   }
//    else if (event->key() == Qt::Key_Alt){

//    }


}

void Player::showLoseDialog()
{
    cout << "You Lost!!!" << endl ; // TODO : this must be replaced with a proper message !
//    QApplication::quit() ;
}
