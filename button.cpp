//button.cpp
#include "button.h"
#include "globals.h"

bool Button::checkCollision(int X, int Y) {
	//check if position is within bounds of button, returns true otherwise returns false
	if (X<x + w && X>x && Y<y + h && Y>y) return true;
	return false;
}

void Button::setImg(std::string imgPath) {
	//sets background image for button, if 
	if (imgPath == "") return;
	if (this->img != nullptr) SDL_DestroyTexture(this->img);
	this->img = IMG_LoadTexture(renderer, imgPath.c_str());
}

Button::Button(int x, int y, int w, int h,std::string imgPath) : x(x), y(y), w(w), h(h) {
	this->setImg(imgPath);
}

Button::~Button() {
	if (this->img != nullptr) SDL_DestroyTexture(this->img);

}

void Button::renderButton() {
	SDL_Rect renderPos = { x,y,w,h };
	SDL_RenderCopy(renderer, this->img, NULL, &renderPos);
}

