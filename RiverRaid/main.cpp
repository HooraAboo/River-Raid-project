#include <QApplication>
#include "player.h"

#include "gameengine.h"

using namespace Qt;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    GameEngine * game = new GameEngine() ;

    game->show();
//    Player * player = new Player(Hoora, view);

    return a.exec();
}
