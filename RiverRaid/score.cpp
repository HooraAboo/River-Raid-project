#include "score.h"

Score::Score()
{
    score = 0;
    setPlainText(QString("Score: ") + QString::number(score));
    this->setPos(x(), y()+5);
}

void Score::increase(int incScore){
    score += incScore*10;
    setPlainText(QString("Score: ") + QString::number(score));
}
