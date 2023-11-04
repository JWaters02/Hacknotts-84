#ifndef HACKNOTTS84_MINIGAME_H
#define HACKNOTTS84_MINIGAME_H

#include <SDL.h>
#include <iostream>

class MiniGame {
public:
	SDL_Texture* bg;
	bool active = false;
	SDL_Texture* diceTexture;
	MiniGame();
	~MiniGame();
	void update();
	int rollDice();
	void diceRender();
	void generateRandomDice(){}


private:

};


#endif