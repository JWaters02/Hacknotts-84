#ifndef HACKNOTTS84_MAINMENU_H
#define HACKNOTTS84_MAINMENU_H

#include <SDL.h>
#include <iostream>

class DescrPage {
public:
	SDL_Texture* bg;
	bool active = false;
	DescrPage();
	~DescrPage();
	void update();
	
private:

};


#endif //HACKNOTTS84_MAINMENU_H