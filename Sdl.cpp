#include "Sdl.h"
#include <iostream>

Sdl::Sdl(const char* title, int width, int height)
    : window(nullptr), renderer(nullptr), running(true)
{
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        std::cerr << "SDL initialization failed: "
                  << SDL_GetError() << '\n';
        running = false;
        return;
    }

    window = SDL_CreateWindow(
        title,
        width,
        height,
        0
    );

    if (window == nullptr)
    {
        std::cerr << "Window creation failed: "
                  << SDL_GetError() << '\n';
        running = false;
        SDL_Quit();
        return;
    }

    renderer = SDL_CreateRenderer(window, nullptr);

    if (renderer == nullptr)
    {
        std::cerr << "Renderer creation failed: "
                  << SDL_GetError() << '\n';
        running = false;
        SDL_DestroyWindow(window);
        window = nullptr;
        SDL_Quit();
    }
}
void Sdl::processEvents()
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        if (event.type == SDL_EVENT_QUIT)
        {
            running = false;
        }
    }
}
Sdl::~Sdl()
{
    if (renderer != nullptr)
    {
        SDL_DestroyRenderer(renderer);
    }

    if (window != nullptr)
    {
        SDL_DestroyWindow(window);
    }

    SDL_Quit();
}
void Sdl::clear()
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
}
void Sdl::present()
{
    SDL_RenderPresent(renderer);
}
bool Sdl::isRunning() const
{
    return running;
}

SDL_Renderer* Sdl::getRenderer() const
{
    return renderer;
}