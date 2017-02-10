#include "enemyspawner.h"
#include "ship.h"
#include "jet.h"
#include "baloon.h"
EnemySpawner::EnemySpawner(GameEngine* engine)
{
    this->gameEngine = engine ;
}


void EnemySpawner::spawnRandomEnemy()
{
//    cout << "enemy spawn called! " << endl ;
    int random = rand() ;
//    if(random % 3 == 0){ // Ship
        Enemy* ship = new Ship(gameEngine) ;
        gameEngine->scene()->addItem(ship);

//    }
//    else if(random == 1){ // Chopper

//    }
//    else if(random == 2){ // Jet

//    }
}
