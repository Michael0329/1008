//State.h
#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

class State
{
public:
	//Constructor
		State();
		
	//Destructor
		~State();
	
	//Quit Request
		bool QuitRequested();

	//Load Assets
		void LoadAssets ();

	//Update
		void Update ();

	//Render
		void Render ();

private:

	Sprite bg;

	bool quitRequested;
};