#include "fuelspawner.h"

FuelSpawner::FuelSpawner(GameEngine* engine)
{
    this->gameEngine = engine ;
}

void FuelSpawner::fuelSpawner()
{
    int randomX = rand() ;

    Fuel* fuel = new Fuel(gameEngine) ;
    gameEngine->scene()->addItem(fuel);

}

