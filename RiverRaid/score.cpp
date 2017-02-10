#include "score.h"

Score::Score(int score , QGraphicsScene* scene)
{
    this->score = score;
    setPlainText(QString("Score: ") + QString::number(score));
    this->setPos(this->x(), this->y()+5);
//    cout << "score created!" << endl ;
    scene->addItem(this);
//    cout << "something wrong!" << endl ;
}

void Score::increase(int incScore){
    score += incScore*10;
    setPlainText(QString("Score: ") + QString::number(score));
//    cout << "score increased!" << endl ;
}

void Score::decrease(){
    score -= 10;
    setPlainText(QString("Score: ") + QString::number(score));
//    cout << "score decreased!" << endl ;
}

int Score::getScore()
{
    return score ;
}


void Score::remove()
{
    scene()->removeItem(this);
    delete this ;
    return ;

}
