#include <iostream>
#include "Sprite.h"
using namespace std;

class GameObject {

public:
//Constructor
  GameObject (int x, int y, SDL_Surface *sprite);

//Sets
  void setXY (int x, int y);

  void setSprite (SDL_Surface *sprite);

private:

  int x, y;
  SDL_Surface *sprite;
};
