#include "health.h"

extern GameEngine* game;

Health::Health(QGraphicsScene * scene , int h)
{

   this->health = h;
   this->setPos(x(), y()+35);
   setPlainText(QString("Health: ") + QString::number(health));

//   setPlainText(QString("Health: "));
//   for(int i = 0; i < h; ++i){
//       heart[i] = new QGraphicsPixmapItem(QPixmap(":/images/Heart.png").scaled(20,20));
//       heart[i]->setPos(x()+80+i*20, y()+8);
//      // scene->addItem(heart[i]);
//   }
}

int Health::getHealthNum(){
    return health;
}

void Health::removeHeart(){
    for(int i = 0; i < health; ++i){
        scene()->removeItem(heart[i]);
        delete heart[i];
    }
}

void Health::decreaseHealth()
{
    if(health > 0){
        health -- ;
        setPlainText(QString("Health: ") + QString::number(health));
    } else{
        explode();
    }
}

void Health::explode()
{
    Player* player = (Player*) scene()->focusItem() ;
    int x = this->x() ;
    int y = this->y() ;
//    cout << "item removed!" << endl ;
    Explosion* exlosion = new Explosion(x, y, this->scene() , "...")  ;
    scene()->removeItem(this);
    delete this;
    cout << "You Lost!!!" << endl ;
    QApplication::quit() ;
    return ;
}
