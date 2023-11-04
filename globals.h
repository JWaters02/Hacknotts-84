#include <SDL.h>
#include <iostream>

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