//globals.h
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <fstream>

class MainMenu;
class MainGame;
class Guide;

enum gameStates {
	MAIN_MENU, MAIN_GAME, GUIDE
};

extern int WINDOW_WIDTH;
extern int WINDOW_HEIGHT;
extern bool running;
extern SDL_Window* window;
extern int gameState;
extern SDL_Renderer* renderer;
extern MainMenu* mainMenu;
extern MainGame* mainGame;
extern Guide* guide;

void handleMainEvents();
void readTestingGameState();
char* getAssetFile(const std::string& subDir = "");