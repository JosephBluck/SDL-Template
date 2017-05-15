#include "SDLInit.h"

bool InitSDL()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "SDL Has failed to initialise: " << SDL_GetError() << "\n";
		system("pause");
		return false;
	}

	return true;
}

bool InitExtensions()
{
	if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) { //Load SDL_Image with PNG Support
		std::cout << "SDL Image failed to initialise: " << IMG_GetError() << "\n";
		system("pause");
		return false;
	}
}