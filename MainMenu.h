//mainmenu.h
#ifndef HACKNOTTS84_MAINMENU_H
#define HACKNOTTS84_MAINMENU_H

#include <SDL.h>
#include <iostream>
#include "button.h"

class MainMenu {
public:
	Button* b = nullptr;
	SDL_Texture* bg;
	bool active = false;
    MainMenu();
	~MainMenu();
	void update();

};


#endif //HACKNOTTS84_MAINMENU_H
