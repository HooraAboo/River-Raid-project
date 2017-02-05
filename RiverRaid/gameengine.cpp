#include "gameengine.h"

GameEngine::GameEngine()
{
    // set the scene
    QGraphicsScene * scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);

    // set the background pic
    this->setBackgroundBrush(QBrush(QImage(":/images/BackGround.png")));
    this->setScene(scene);
    // set scroll off
    this->setHorizontalScrollBarPolicy(ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(ScrollBarAlwaysOff);
    this->setFixedSize(800,600);



    // set the player
    Player * player = new Player("mamad" , this) ;
    // set focus on player
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);

    // set the score
//    Score * score = new Score();
//    scene->addItem(score);
//    score->setPos(x(), y()+5);

    // set the health
    Health * health = new Health();
    scene->addItem((QGraphicsPixmapItem*) health);
//    health->setPos(x(), y()+35);
}
