#include "health.h"

Health::Health()
{
    health = 3;
    setPlainText(QString("Health: ") + QString::number(health));
}

void Health::increase(){
    health++;
}

void Health::decrease(){
    health--;
}
