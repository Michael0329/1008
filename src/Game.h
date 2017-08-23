//GameBase.h

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include <iostream>
using namespace std;

class Game
{

public:

//Constructor

	Game (string Title, int Width, int Height);

//Destructor
	~Game ();

//Run
	void Run ();

//Get Renderer
	SDL_Renderer* GetRenderer ();

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