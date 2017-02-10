#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QFont>
#include <iostream>
#include <QGraphicsScene>
using namespace std;

class Score: public QGraphicsTextItem {
public:
    Score(int score , QGraphicsScene* scene);
    void increase(int);
    void decrease();
    int getScore();
    void remove();
private:
    int score;
};

#endif // SCORE_H
