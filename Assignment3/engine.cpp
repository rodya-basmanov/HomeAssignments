#include <iostream>
#include "engine.h"

Engine::Engine()
{
    std::cout << "Engine created";
}
Engine::~Engine()
{
    std::cout << "Engine destroyed";
}
void Engine::start()
{
    std::cout << "Engine started";
}