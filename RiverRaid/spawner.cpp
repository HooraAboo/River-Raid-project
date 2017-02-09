#include "spawner.h"

Spawner::Spawner(GameEngine* engine)
{
    this->gameEngine = engine ;
}

void Spawner::spawnRandom()
{
//    cout << "enemy spawn called! " << endl ;
    int random = qrand() ;
    if (random % 4 == 0){ //fuel
        Fuel* fuel = new Fuel(gameEngine);
        fuel->setZValue(-1);
        gameEngine->scene()->addItem(fuel);
    }
    else if(random % 4 == 1){ // Ship
        Enemy* ship = new Ship(gameEngine) ;
        gameEngine->scene()->addItem(ship);

    }
    else if(random % 4 == 2){ // Baloon
        Enemy* baloon = new Baloon(gameEngine) ;
        gameEngine->scene()->addItem(baloon);
    }
    else if(random % 4 == 3){ // Jet
        Enemy* jet = new Jet(gameEngine) ;
        gameEngine->scene()->addItem(jet);
        cout << "Jet created!" << endl ;
    }
}
