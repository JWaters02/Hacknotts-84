//mainmenu.h
#ifndef HACKNOTTS84_MAINMENU_H
#define HACKNOTTS84_MAINMENU_H

#include <SDL.h>
#include <iostream>
#include "button.h"

class MainMenu {
public:
	SDL_Texture* bg;
	bool active = false;

    MainMenu();
	~MainMenu();
	void update();


private:
    Button start = Button(0, 0, 0, 0, TTF_OpenFont(R"(..\assets\font\yesbois.ttf)", 24), "", "");
};


#endif //HACKNOTTS84_MAINMENU_H
