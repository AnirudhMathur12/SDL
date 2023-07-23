#include <iostream>
#include <SDL2/SDL.h>

SDL_Window* win;
SDL_Renderer* rend;

const char* title = "Game";
const int WIDTH = 600, HEIGHT = 400;
bool running = true;

int main()
{
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        std::cout << "Couldn't init SDL. Error: " << SDL_GetError() << std::endl;
    }
    win = SDL_CreateWindow(title, 20, 20, WIDTH, HEIGHT, 0);
    rend = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

    while(running)
    {
        SDL_Event e;
        while(SDL_PollEvent(&e))
        {
            switch(e.type)
            {
                case SDL_QUIT:
                    running = false;
                    break;
            }
        }
    }

    std::cout << "Hello world!\n";
    return 0;
}
