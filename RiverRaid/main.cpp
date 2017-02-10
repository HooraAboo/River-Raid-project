#include <QApplication>
#include <iostream>

#include "gameengine.h"
using namespace Qt;

GameEngine * game;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // load static images
    Enemy::leftShipImage = new QPixmap(":/images/LeftShip.png") ;
    Enemy::rightShipImage = new QPixmap(":/images/RightShip.png") ;
    Enemy::baloonImage = new QPixmap(":/images/Baloon.png") ;
    Enemy::leftJetImage = new QPixmap(":/images/LeftJet.png") ;
    Enemy::rightJetImage = new QPixmap(":/images/RightJet.png") ;

    Wall::rightWallImage = new QPixmap(":/images/RightWall.png") ;
    Wall::leftWallImage = new QPixmap(":/images/LeftWall.png") ;

    Bridge::bridgeImage = new QPixmap(":/images/Bridge.png") ;

    game = new GameEngine() ;
    game->show();

    return a.exec();
}
