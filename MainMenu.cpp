#include "MainMenu.h"
#include "globals.h"
#include <SDL.h>

MainMenu::MainMenu() {
	this->bg = IMG_LoadTexture(renderer, R"(..\assets\images\bg.png)");
	this->active = true;
}
MainMenu::~MainMenu() {
	SDL_DestroyTexture(this->bg);
}

void MainMenu::update() {
	if (!this->active) return;
	SDL_RenderCopy(renderer, bg, NULL, NULL);
}