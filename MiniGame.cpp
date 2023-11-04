#include "MiniGame.h"
#include "globals.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include <SDL.h>

MiniGame::MiniGame() {
	int diceNum = this->rollDice();

	std::string pathname = "..\\assets\\images\\Dice" + std::to_string(diceNum) + ".png";
	this->bg = IMG_LoadTexture(renderer, pathname.c_str());
	this->active = true;
}

MiniGame::~MiniGame() {
	SDL_DestroyTexture(this->bg);
}

void MiniGame::update() {
	if (!this->active) return;
	SDL_RenderCopy(renderer, bg, NULL, NULL);
}

int MiniGame::rollDice() {


	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	// Generate random number from 1-6
	return std::rand() % 6 + 1;

}
