#define SDL_MAIN_HANDLED
#include "globals.h"

int main() {
	SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_PNG);
	window = SDL_CreateWindow("noughts and crosses", 200, 200, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	mainMenu = new MainMenu();

    readTestingGameState();

	while (running) {
		SDL_RenderClear(renderer);
		if (gameState == MAIN_MENU) {
			if (mainMenu != nullptr) mainMenu->update();
		}
		handleMainEvents();
		SDL_RenderPresent(renderer);
	}
}