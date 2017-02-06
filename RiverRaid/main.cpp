#include <QApplication>
#include "player.h"
#include "gameengine.h"
#include <iostream>

using namespace Qt;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    GameEngine * game = new GameEngine() ;
    cout << "game engine created!" << endl ;
    game->show();
//    Player * player = new Player(Hoora, view);

    return a.exec();
}
