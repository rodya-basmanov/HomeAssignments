#include <iostream>
#include "engine.h"

Engine::Engine()
{
    std::cout << "Engine created\n";
}
Engine::~Engine()
{
    std::cout << "Engine destroyed\n";
}
void Engine::start()
{
    std::cout << "Engine started\n";
}