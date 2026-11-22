
#ifndef SDL_HELPER_H
#define SDL_HELPER_H

#include <SDL3/SDL.h>

/**
 * @brief Manages an SDL window and renderer.
 */
class Sdl
{
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool running;

public:
    /**
     * @brief Creates an SDL window and renderer.
     */
    Sdl(const char* title, int width, int height);

    /**
     * @brief Releases SDL resources.
     */
    ~Sdl();

    /**
     * @brief Processes window events.
     */
    void processEvents();

    /**
     * @brief Clears the window.
     */
    void clear();

    /**
     * @brief Displays the rendered frame.
     */
    void present();

    /**
     * @brief Checks whether the window is running.
     */
    bool isRunning() const;

    /**
     * @brief Returns the SDL renderer.
     */
    SDL_Renderer* getRenderer() const;
};

#endif
