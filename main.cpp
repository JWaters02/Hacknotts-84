#define SDL_MAIN_HANDLED
#include "globals.h"
int main() {
	window = SDL_CreateWindow("noughts and crosses", 200, 200, 600, 600, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	while (running) {

	}
}