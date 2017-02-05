#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QFont>

using namespace std;

class Score: public QGraphicsTextItem{
public:
    Score();
    void increase(int);

private:
    int score;
};

#endif // SCORE_H
