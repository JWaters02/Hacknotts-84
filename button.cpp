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

void Button::setText(std::string text, SDL_Color textColor) {
    // First, clean up any existing texture
    if (img != nullptr) {
        SDL_DestroyTexture(img);
        img = nullptr;
    }


    // Render the text to a surface
    SDL_Surface* textSurface = TTF_RenderText_Solid(mFont, text.c_str(), textColor);
    if (textSurface == nullptr) {
        SDL_Log("Unable to render text surface! SDL_ttf Error: %s\n", TTF_GetError());
    } else {
        // Create texture from surface pixels
        img = SDL_CreateTextureFromSurface(renderer, textSurface);
        if (img == nullptr) {
            SDL_Log("Unable to create texture from rendered text! SDL Error: %s\n", SDL_GetError());
        }

        // Get the dimensions of the button
        w = textSurface->w;
        h = textSurface->h;

        // Get rid of old surface
        SDL_FreeSurface(textSurface);
    }
}

