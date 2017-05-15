#include "SDLInit.h"

#define WINDOWHEIGHT 1280 //Configure values for screen size here
#define WINDOWWIDTH 720

int main(int arc, char* args[])
{
	SDL_Window* window;
	SDL_Renderer* renderer;

	//Initialise Everything
	if (!InitSDL()) { return -1; }

	if (!InitExtensions()) {
		SDL_Quit();
		return -2;
	}

	if (!SetupRenderer(window, renderer, WINDOWHEIGHT, WINDOWWIDTH)) {
		CloseSDL(window, renderer);
		return -3;
	}

	//If you get this far, everything started correctly

	system("pause"); //Pause for debugging purposes
	return 0;
}