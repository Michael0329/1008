#include <iostream>
#include <vector>
using namespace std;

class GraphicManager {

public:

//Constructor
  GraphicManager();

//Destructor
  ~GraphicManager();

//Run
  void Run ();

private:

  static GraphicManager* instance;


};
