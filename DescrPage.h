#ifndef HACKNOTTS84_DESCRPAGE_H
#define HACKNOTTS84_DESCRPAGE_H

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


#endif //HACKNOTTS84_DESCRPAGE_H