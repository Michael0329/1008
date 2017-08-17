#include "SDL2/SDL.h"
#include <iostream>

	bool init ();
	bool loadMedia();
	void close ();

	SDL_Window* janelaBoa = NULL;
	SDL_Surface* surfaceMaraviliha = NULL;
	SDL_Surface* imagem = NULL;

	bool init (){
		bool hasStarted = true;

		if (SDL_INIT_VIDEO < 0){
			std::cout << SDL_GetError() << std::endl;
			hasStarted = false;
		}

		else {
			janelaBoa = SDL_CreateWindow ("aeho", 100, 100, 480, 320, SDL_WINDOW_SHOWN);

			if (janelaBoa == NULL){
				std::cout << "deu ruim" << SDL_GetError() << std::endl;
				hasStarted = false;
			}

			else {
				surfaceMaraviliha = SDL_GetWindowSurface (janelaBoa);
			}
		}

		return hasStarted;
	}

	bool loadMedia () {

		bool hasStarted = true;

		imagem = SDL_LoadBMP ("kek.bmp");
		if (imagem == NULL){
			std::cout << "deu ruim" << SDL_GetError();
			hasStarted = false;
		}

		return hasStarted;
	}

	void close () {

		SDL_FreeSurface (imagem);
		imagem = NULL;

		SDL_DestroyWindow (janelaBoa);
		janelaBoa = NULL;

		SDL_Quit();

	}


int main (int argc, char* args[]) {

	if (!init()){
		std::cout << "deu ruim na inicialização";
	}

	else {
		if (!loadMedia()){
			std::cout << "deu ruim em loadar";
		}

		else {
			SDL_BlitSurface (imagem, NULL, surfaceMaraviliha, NULL);
			SDL_UpdateWindowSurface (janelaBoa);
			SDL_Delay (5000);
		}
	}

	close();
	return 0;
}


