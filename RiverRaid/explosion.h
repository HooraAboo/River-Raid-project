#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <typeinfo>
#include <string>



using namespace std ;

class Explosion: public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Explosion(int x , int y , QGraphicsScene* scene , string type);
public slots:
    void move();
    void remove() ;
};

#endif // EXPLOSION_H
