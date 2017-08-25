#include <iostream>
#include "GraphicManager.h"

GraphicManager* GraphicManager::instance = NULL;

//Constructor
  GraphicManager::GraphicManager(){

//Singleton
    if (instance != NULL){
      cerr << "Error: Too many GraphicManager instances" << endl;
      exit (1);
    }
    instance = this;

  };

//Destructor
  GraphicManager::~GraphicManager(){};

//Run (Update)
  void GraphicManager::Run(){

  }
