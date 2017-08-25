//GameBase.cpp
#include "Game.h"

Game* Game::instance = NULL;

//Constructor
	Game::Game (){

		//Singleton
		if (instance != NULL){
			cerr << "Error [GAME] Multiple instances running." << endl;
			exit (1);
		}

		instance = this;
		initializeSDLModules();

	}

	void Game::initializeSDLModules () {
		//SDL Modules
		if (SDL_Init(SDL_INIT_VIDEO || SDL_INIT_AUDIO || SDL_INIT_TIMER) < 0)    {
			cerr << "Module initialization error: " << SDL_GetError () << endl;
		}

		//IMG Modules
		IMG_Init (IMG_INIT_PNG);

		//Creates Window and Renderer
		gameWindow =  SDL_CreateWindow ("1008", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 480, 270, SDL_WINDOW_SHOWN);
		if (gameWindow == NULL){
			cout << "Window initialization error: " << SDL_GetError () << endl;
		}
		else {
			renderer = SDL_CreateRenderer (gameWindow, -1, SDL_RENDERER_ACCELERATED);
		}

	}

	Game::~Game() {};
//
