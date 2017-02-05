#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QFont>

class Health: public QGraphicsTextItem{
public:
    Health();
    //void increase;
    //void decrease;
private:
    int health;
};

#endif // HEALTH_H
