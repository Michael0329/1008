#include "SDL2/SDL.h"
#include <iostream>

int main (int argc, char* args[]) {
	
	if (SDL_Init (SDL_INIT_VIDEO || SDL_INIT_GAMECONTROLLER) != 0 ){
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return 1;
	}

	SDL_Window *win = SDL_CreateWindow ("JanelaBoa", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
while (true){
	if (win == nullptr){
		std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
	}
}
	SDL_Quit();

	return 1;
}