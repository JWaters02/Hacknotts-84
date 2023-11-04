//mainmenu.cpp
#include "MainMenu.h"
#include "button.h"
#include "globals.h"
#include <SDL.h>

void someFunc() {
	std::cout << "oihfdrihogf\n";
}

MainMenu::MainMenu() {
	this->bg = IMG_LoadTexture(renderer,"..\\assets\\images\\bg.png");
	b=new Button(0, 0, 200, 100, "assets\\images\\button.png",someFunc,someFunc,"bruh","assets\\font\\yesbois.ttf");
	int width = 500;
	this->active = true;
}

MainMenu::~MainMenu() {
	SDL_DestroyTexture(this->bg);
}

void MainMenu::update() {
	if (!this->active) return;
	SDL_RenderCopy(renderer, bg, NULL, NULL);
	b->renderButton();
	b->handleMouseEvent();
	

  
}