//GameBase.h

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <iostream>
using namespace std;

class Game
{

public:

//Constructor

	Game ();

//Destructor
	~Game ();

//Run
	void Run ();

//Get Renderer
	SDL_Renderer* GetRenderer ();

//Start SDL Modules
	void inicializeSDLModules ();
//State
//	State& GetState ();

//Get Instance
	static Game* GetInstance ();

private:

	static Game* instance;

	SDL_Window* gameWindow = NULL;

	SDL_Renderer* renderer = NULL;

//	State* state = NULL;

};
