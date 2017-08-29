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

	}

	Game::~Game() {};

//Update
	void Game::Update (){

//Test stuff
		GameObject c1 (500, 60, IMG_Load ("assets/01.png"));
		GraphicManager G1;
		G1.CreateWindow();

//Main game loop
		while (!quit) {

					CurrentTime = SDL_GetTicks ();
					if (CurrentTime > LastTime + (1000/fps)){
							LastTime = CurrentTime;
							cout << CurrentTime << endl;
							G1.Drawer (c1.sprite);
							G1.Run();
							};
//Quit check
			while (SDL_PollEvent (&e) != 0){
						if (e.type == SDL_QUIT){
							quit = true; };
			};
	};

};
