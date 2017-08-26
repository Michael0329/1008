#include <iostream>
#include "SDL2/SDL_image.h"
using namespace std;

class Sprite {

public:

//Constructor
  Sprite (SDL_Surface *sprite);

//Sets
  void setSurface (SDL_Surface &sprite);

private:
  SDL_Surface *sprite = nullptr;
};
