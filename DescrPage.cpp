#include "DescrPage.h"
#include "globals.h"
#include <SDL.h>

DescrPage::DescrPage() {
	std::string pathname = "..\\assets\\images\\guide.png";
	this->bg = IMG_LoadTexture(renderer, pathname.c_str());
	if (!bg) {
		SDL_Log("Failed to load image: %s", IMG_GetError());
	}
	this->active = true;
}

DescrPage::~DescrPage() {
	SDL_DestroyTexture(this->bg);
}

void DescrPage::update() {
	if (!this->active) return;
	SDL_RenderCopy(renderer, this->bg, NULL, NULL);
}
