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

const SDL_Color PINK   = {178, 93, 166, 255};
const SDL_Color BLUE   = {102, 136, 195, 255};
const SDL_Color GREEN  = {72, 165, 106, 255};
const SDL_Color YELLOW = {234, 175, 65, 255};
const SDL_Color RED    = {206, 74, 74, 255};

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