#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <string>
#include <QPixmap>
#include <QKeyEvent>



using namespace std;

class Player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    string name;
    int health;
    int score;
    int fuel;
    QGraphicsView* view ;

public:
    Player(string, QGraphicsView*);
    void keyPressEvent(QKeyEvent * event);
};

#endif // PLAYER_H
