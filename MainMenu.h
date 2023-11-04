//mainmenu.h
#ifndef HACKNOTTS84_MAINMENU_H
#define HACKNOTTS84_MAINMENU_H

#include <SDL.h>
#include <iostream>

class MainMenu {
public:
	SDL_Texture* bg;
	Button b;
	bool active = false;
	MainMenu();
	~MainMenu();
	void update();


private:

};


#endif //HACKNOTTS84_MAINMENU_H
