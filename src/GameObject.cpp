#include <iostream>
#include "GameObject.h"

//Constructor
  GameObject::GameObject (int x, int y){
    setXY(x, y);
  };

//Sets
void GameObject::setXY (int x, int y){
  this->x = x;
  this->y = y;
}
