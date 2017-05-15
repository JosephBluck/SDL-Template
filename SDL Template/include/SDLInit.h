#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <iostream>

//SDL Initialization functions

bool InitSDL(); //Initalise all of base SDL2
bool InitExtensions(); //Initialise Image and Mixer extensions
bool SetupRenderer(SDL_Window* window, SDL_Renderer* renderer);