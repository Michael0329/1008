//GameBase.cpp
#include "Game.h"

Game* Game::instance = NULL;

//Constructor
	Game::Game (string Title, int Width, int Height){
		
		//Singleton
		if (instance != NULL){
			cerr << "Error [GAME] Multiple instances running." << endl;
			exit (1);
		}
		
		instance = this;

		//Start SDL Modules
		if (SDL_Init(SDL_INIT_VIDEO || SDL_INIT_AUDIO || SDL_INIT_TIMER) < 0)    {
			cerr << "Falha de inicializacao: " << SDL_GetError ();
		}
	}



//