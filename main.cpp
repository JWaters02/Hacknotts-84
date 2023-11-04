#define SDL_MAIN_HANDLED
#include "globals.h"

int main() {
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("noughts and crosses", 200, 200, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    readTestingGameState();

	while (running) {
		SDL_RenderClear(renderer);
		if (gameState == MAIN_MENU) {

		} else if (gameState == MAIN_GAME) {

        }
		handleMainEvents();
		SDL_RenderPresent(renderer);
	}
}