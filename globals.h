//globals.h
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <fstream>

class MainMenu;
class MainGame;
class Guide;
class DescrPage;

enum gameStates {
	MAIN_MENU, MAIN_GAME, GUIDE, DESCR_PAGE
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
extern DescrPage* descrPage;

void handleMainEvents();
void readTestingGameState();
char* getAssetFile(const std::string& subDir = "");