#include "globals.h"
void handleMainEvents() {
	SDL_Event e;
	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) {
			running = false;
		}
	}
}