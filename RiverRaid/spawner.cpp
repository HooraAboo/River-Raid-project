#include "spawner.h"

Spawner::Spawner(GameEngine* engine)
{
    this->gameEngine = engine ;
}

void Spawner::spawnRandom()
{
//    cout << "enemy spawn called! " << endl ;
    int random = rand() ;
    if (random % 2 == 0){ //fuel
        Fuel* fuel = new Fuel(gameEngine);
        fuel->setZValue(-1);
        gameEngine->scene()->addItem(fuel);
    }
    else if(random % 2 == 1){ // Ship
        Enemy* ship = new Ship(gameEngine) ;
        gameEngine->scene()->addItem(ship);

    }
//    else if(random % 4 == 2){ // Chopper

//    }
//    else if(random % 4 == 3){ // Jet

//    }
}
