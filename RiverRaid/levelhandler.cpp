#include "levelhandler.h"
#include "wall.h"
#include "bridge.h"
levelHandler::levelHandler(GameEngine* engine)
{
    this->engine = engine ;
}

void levelHandler::nextLevel()
{

    engine->sceneSpeed *= 1.05 ;
//    cout << "nextLevel called!   " << engine->getSceneSpeed() << endl ;
    Wall* leftWall = new Wall(engine , 'L') ;
    Wall* rightWall = new Wall(engine , 'R') ;
    Bridge* bridge = new Bridge(engine) ;
    engine->scene()->addItem(leftWall);
    engine->scene()->addItem(rightWall);
    engine->scene()->addItem(bridge);
}

