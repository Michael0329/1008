#include <iostream>
#include <vector>
#include "SDL2/SDL_image.h"
using namespace std;

class GraphicManager {

public:

//Constructor
  GraphicManager();

//Destructor
  ~GraphicManager();

//Run
  void Run ();

//Apply images on the Screen
 void Drawer (SDL_Surface *sprite);

//CreatesWindow
  void CreateWindow();

private:

  static GraphicManager *instance;

  SDL_Window *gameWindow = NULL;

  SDL_Renderer* renderer = NULL;


};
