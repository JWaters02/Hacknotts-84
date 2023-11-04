#define SDL_MAIN_HANDLED
#include "globals.h"
int WINDOW_WIDTH = 600;
int WINDOW_HEIGHT = 600;
bool running = true;
SDL_Window* window;
SDL_Renderer* renderer;
int main() {
	window = SDL_CreateWindow("noughts and crosses", 200, 200, 600, 600, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	while (running) {
		handleMainEvents();
	}
}