#include "gameengine.h"

GameEngine::GameEngine()
{
    // set the scene
    QGraphicsScene * scene = new QGraphicsScene();
    scene->setSceneRect(0,0,900,613);


    // set the background pic
    this->setBackgroundBrush(QBrush(QImage(":/images/BackGround.png")));
    this->setScene(scene);
    // set scroll off
    this->setHorizontalScrollBarPolicy(ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(ScrollBarAlwaysOff);
    this->setFixedSize(900,613);


    // set the player
    Player * player = new Player("mamad" , this) ;
    // set focus on player
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);


//    // set the score
    Score * score = new Score(0 , scene);
//    scene->addItem(score);

    // set the health
    Health * health = new Health(scene , 5);
    scene->addItem(health);


    // spawn enemies
    EnemySpawner * spawner =  new EnemySpawner(this) ;
    QTimer * timer = new QTimer() ;
    connect(timer , SIGNAL(timeout()) ,spawner , SLOT(spawnRandomEnemy()) ) ;

    timer->start(2000);


    // play BG music
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/soundtrack/BG sound.mp3"));
    music->play();


    // spawn fuel tank
    Fuel* fuel = new Fuel(this);
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), fuel, SLOT(move()));
}
