#ifndef HACKNOTTS84_MINIGAME_H
#define HACKNOTTS84_MINIGAME_H

#include <SDL.h>
#include <iostream>

class MiniGame {
public:
	SDL_Texture* bg;
	bool active = false;
	MiniGame();
	~MiniGame();
	void update();
	int rollDice();


private:

};


#endif