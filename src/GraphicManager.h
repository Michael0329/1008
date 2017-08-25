#include <iostream>
using namespace std;

class GraphicManager {

public:

//Constructor
  GraphicManager();

//Destructor
  ~GraphicManager();
  
private:

  static GraphicManager* instance;

};
