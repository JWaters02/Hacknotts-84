//mainmenu.cpp
#include "MainMenu.h"
#include "button.h"
#include "globals.h"
#include "button.h"
#include <SDL.h>

MainMenu::MainMenu() {
	this->bg = IMG_LoadTexture(renderer, R"(..\assets\images\bg.png)");
	this->active = true;
	int width = 500;
	this->b = Button((int)(WINDOW_WIDTH / 2 - width / 2), (int)(WINDOW_HEIGHT / 2), (int)width, 100,"..\\assets\\images\\bg.png");

}

MainMenu::~MainMenu() {
	SDL_DestroyTexture(this->bg);
}

void MainMenu::update() {
	if (!this->active) return;
	SDL_RenderCopy(renderer, bg, NULL, NULL);
    //TTF_Font *font = TTF_OpenFont(R"(..\assets\fonts\arial.ttf)", 24);

    Button startButton(200, 200, 200, 50, "", "Start game");
    Button guideButton(200, 300, 200, 50, "", "");
}