#include <QApplication>
#include <iostream>

#include "player.h"
#include "gameengine.h"
using namespace Qt;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    // load images
    Enemy::shipImage = new QPixmap(":/images/Ship.png") ;
    GameEngine * game = new GameEngine() ;
    game->show();

    return a.exec();
}
