#include <iostream>

#include "Game.h"
#include "GameObject.h"

int main(int argc, char** argv)
{
    std::cout << "Hello World" << std::endl;
    
    CoolGame::Game game;
    game.addGameObject("Object1");
    game.addGameObject("Object2");
    

    return 0;
}
