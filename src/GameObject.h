#include <iostream>
using namespace std;

class GameObject {

public:
//Constructor
  GameObject (int x, int y);

//Sets
  void setXY (int x, int y);
private:

  int x, y;
};
