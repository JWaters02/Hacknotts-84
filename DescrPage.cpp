#include "DescrPage.h"
#include "globals.h"
#include <SDL.h>

DescrPage::DescrPage() {
	this->bg = IMG_LoadTexture(renderer, R"(..\assets\images\bg.png)");
	this->active = true;
}

DescrPage::~DescrPage() {
	SDL_DestroyTexture(this->bg);
}

void DescrPage::update() {
	if (!this->active) return;
	SDL_RenderCopy(renderer, bg, NULL, NULL);
}
