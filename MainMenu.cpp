#include "MainMenu.h"
#include "globals.h"

MainMenu::MainMenu() {

}
MainMenu::~MainMenu() {
	SDL_DestroyTexture(this->bg);
}

void MainMenu::update() {
	if (!this->active) return;
}