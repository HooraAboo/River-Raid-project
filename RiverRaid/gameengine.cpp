#include "gameengine.h"

double GameEngine::sceneSpeed = 2.5 ;
double GameEngine::normalHorizontalSpeed = 1;


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


    // set the score
    score = new Score(0 , scene);

    // set the health
    health = new Health(scene , 5);
    scene->addItem(health);


    // set the fuel
    fuel = new PlayerFuel(scene , 500) ;
    scene->addItem(fuel);

    // spawn enemies
    Spawner * spawner =  new Spawner(this) ;
    QTimer * timer = new QTimer() ;
    connect(timer , SIGNAL(timeout()) ,spawner , SLOT(spawnRandom()) ) ;

    timer->start(2000);


    // play BG music
    QMediaPlaylist * playInLoop = new QMediaPlaylist();
    playInLoop->addMedia(QUrl("qrc:/soundtrack/BackgroundSound.mp3"));
    playInLoop->setPlaybackMode((QMediaPlaylist::Loop));

    QMediaPlayer * bgSound = new QMediaPlayer();
    bgSound->setPlaylist(playInLoop);
    bgSound->play();


    // create a wall for test :
    levelHandler* handler = new levelHandler(this) ;
    QTimer* levelTimer = new QTimer() ;
    connect(levelTimer , SIGNAL(timeout()) , handler , SLOT(nextLevel()) ) ;

    levelTimer->start(15000);
}

double GameEngine::getSceneSpeed()
{
    return sceneSpeed ;
}

double GameEngine::getNormalHorizontalSpeed()
{
    return normalHorizontalSpeed ;
}

