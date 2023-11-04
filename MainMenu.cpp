//mainmenu.cpp
#include "MainMenu.h"
#include "button.h"
#include "globals.h"
#include <SDL.h>

MainMenu::MainMenu() {
	this->bg = IMG_LoadTexture(renderer, R"(..\assets\images\bg.png)");
	this->active = true;
	int width = 500;
    TTF_Font* font = TTF_OpenFont(R"(..\assets\font\yesbois.ttf)", 24);
    this->start = Button(0, 0, 200, 50, font, "", "Start", RED);
}

MainMenu::~MainMenu() {
	SDL_DestroyTexture(this->bg);
}

void MainMenu::update() {
	if (!this->active) return;
	SDL_RenderCopy(renderer, bg, nullptr, nullptr);
    start.renderButton();
}