#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <fstream>

#include "MainMenu.h"

class MainMenu; //declares Mainmenu in scope of globals.h

enum gameStates {
	MAIN_MENU, MAIN_GAME
};

extern int WINDOW_WIDTH;
extern int WINDOW_HEIGHT;
extern bool running;
extern SDL_Window* window;
extern int gameState;
extern SDL_Renderer* renderer;
extern MainMenu* mainMenu;

void handleMainEvents();
void readTestingGameState();