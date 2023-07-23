#pragma once
#include <iostream>
#include <SDL2/SDL.h>

class Entity
{
    SDL_Rect position;
    SDL_Texture* tex;
    
    Entity()
    {
        std::cout << "yay!";
    }
};
