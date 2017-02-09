#include <QApplication>
#include <iostream>

#include "player.h"
#include "gameengine.h"
using namespace Qt;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // load static images
    Enemy::leftShipImage = new QPixmap(":/images/LeftShip.png") ;
    Enemy::rightShipImage = new QPixmap(":/images/RightShip.png") ;
    Enemy::baloonImage = new QPixmap(":/images/Baloon.png") ;
    Enemy::leftJetImage = new QPixmap(":/images/LeftJet.png") ;
    Enemy::rightJetImage = new QPixmap(":/images/RightJet.png") ;


    GameEngine * game = new GameEngine() ;
    game->show();

    return a.exec();
}
