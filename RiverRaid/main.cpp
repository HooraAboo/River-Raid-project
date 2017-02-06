#include <QApplication>
#include "player.h"
#include "gameengine.h"
#include <iostream>

using namespace Qt;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    GameEngine * game = new GameEngine() ;
    game->show();

    return a.exec();
}
