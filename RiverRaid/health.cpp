#include "health.h"

Health::Health()
{
//    health = 3;
//    setPlainText(QString("Health: "));
//    for (int i = 0; i < health; ++i) {
//        heart[i] = new QGraphicsPixmapItem(QPixmap::fromImage(QImage(":/images/Heart.png").scaled(20 , 20))) ;
//        heart[i]->setPos(this->x()+ 10 + 20*i , this->y());
//        scene()->addItem(heart[i]);
//    }


}

void Health::increase(){
    health++;
}

void Health::decrease(){
    health--;
}
