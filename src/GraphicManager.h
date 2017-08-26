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
  void Run(SDL_Surface *sprite, SDL_Surface* tela);

private:

  static GraphicManager* instance;


};
