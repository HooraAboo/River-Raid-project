#include "jet.h"

Jet::Jet(QGraphicsView* view)
{
    this->view = view ;
    this->health = 1 ;
    this->score = 3 ;
    this->speed = 5 ;
    this->normalHorizontalSpeed = engine->getNormalHorizontalSpeed() ;
    int sceneWidth = 350; //this must be fixed!
    int randomY = (qrand()% sceneWidth + 120) ;

    int rand = qrand() ;
    if(qrand() % 2){
        setPixmap(rightJetImage->scaled(60 , 60));
        setPos(0 , randomY);
    }
    else{
        setPixmap(leftJetImage->scaled(60, 60));
        this->normalHorizontalSpeed *= -1 ;
        setPos(view->width() , randomY);
    }

    QTimer *timer = new QTimer() ;

    connect(timer ,SIGNAL(timeout()) , this , SLOT(move()) ) ;

    timer->start(25);

}

void Jet::move()
{
    QList<QGraphicsItem*> colliding_Items = collidingItems() ;
    for (int i = 0; i < colliding_Items.size(); ++i) {
        if( typeid(*(colliding_Items[i])) == typeid(Player)){
            cout << "Enemy collided with player!" ;
            this->explode();
            Player* player = (Player*) colliding_Items[i] ;
            player->getHealth()->decreaseHealth();
            this->scene()->removeItem(this);
            delete this ;
            return ;
        }
    }

    setPos(x() + normalHorizontalSpeed * speed , y() + engine->getSceneSpeed() ) ;
//    if(x() < 240 || x() > (590) ){
////        scene()->removeItem(this);
////        delete this ;
////        this->normalHorizontalSpeed *= -1 ;
//        return ;
//    }
    if(y() > scene()->height()){
        scene()->removeItem(this);
        delete this ;
        return ;
    }
}

