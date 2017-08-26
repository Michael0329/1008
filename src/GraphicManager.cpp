#include <iostream>
#include "GraphicManager.h"

GraphicManager* GraphicManager::instance = NULL;
SDL_Surface *surfaceWindow = nullptr; //Surface da Janela do Jogo

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
    SDL_UpdateWindowSurface (gameWindow);

  }

//Applies images to the screen
  void GraphicManager::Drawer (SDL_Surface *sprite){
    SDL_BlitSurface (sprite, NULL, surfaceWindow, NULL);
  };

//Creates Window and Renderer
  void GraphicManager::CreateWindow (){
    gameWindow =  SDL_CreateWindow ("1008", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 480, 270, SDL_WINDOW_SHOWN);
    if (gameWindow == NULL){
      cout << "Window initialization error: " << SDL_GetError () << endl;
    }
    else {
      renderer = SDL_CreateRenderer (gameWindow, -1, SDL_RENDERER_ACCELERATED);
      surfaceWindow = SDL_GetWindowSurface (gameWindow);
    }
  }
