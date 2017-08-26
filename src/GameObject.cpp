#include <iostream>
#include "GameObject.h"

//Constructor
  GameObject::GameObject (int x, int y, SDL_Surface *sprite){
    setXY(x, y);
    //setSprite(*sprite);
  };

//Sets
void GameObject::setXY (int x, int y){
  this->x = x;
  this->y = y;
}

void GameObject::setSprite (SDL_Surface *Sprite){
  this->sprite = Sprite;
  if (sprite != NULL) {
    cout << "Loaded sprite";
  };
}
