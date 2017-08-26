#include <iostream>
#include "Sprite.h"

//Constructor
  Sprite::Sprite (SDL_Surface *sprite){
    setSurface (*sprite);
  };

  void Sprite::setSurface (SDL_Surface &sprite){
    this->sprite = &sprite;
  }
