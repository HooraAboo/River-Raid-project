#include "gameengine.h"
#include "player.h"
GameEngine::GameEngine()
{
    // set the scene
    QGraphicsScene * scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    // set the background pic
    this->setBackgroundBrush(QBrush(QImage(":/images/BackGround.png")));
    this->setScene(scene);
    this->setHorizontalScrollBarPolicy(ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(ScrollBarAlwaysOff);
    this->setFixedSize(800,600);



    // set the player
    Player * player = new Player("mamad" , this) ;
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);




}
