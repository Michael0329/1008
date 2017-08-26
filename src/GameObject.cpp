#include <iostream>
#include "GameObject.h"

//Constructor
  GameObject::GameObject (int x, int y, SDL_Surface *sprite){
    setXY(x, y);
    cout << x << endl << y << endl;
  };

//Sets
void GameObject::setXY (int x, int y){
  this->x = x;
  this->y = y;
}
