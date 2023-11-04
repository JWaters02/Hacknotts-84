//button.cpp
#include "button.h"
#include "globals.h"

bool Button::checkCollision(int X, int Y) {
	//check if position is within bounds of button, returns true otherwise returns false
	if (X<x + w && X>x && Y<y + h && Y>y) return true;
	return false;
}

void Button::setImg(const std::string& imgPath) {
	if (imgPath.empty()) return;
	if (this->img != nullptr) SDL_DestroyTexture(this->img);
	this->img = IMG_LoadTexture(renderer, imgPath.c_str());
}

Button::Button(int x, int y, int w, int h,
               TTF_Font* font,
               const std::string& imgPath,
               const std::string& text,
               SDL_Color textColour):
               x(x), y(y), w(w), h(h), mFont(font) {
	this->setImg(imgPath);
    this->setText(text, textColour);
}

Button::~Button() {
	if (this->img != nullptr) SDL_DestroyTexture(this->img);
    if (this->text != nullptr) SDL_DestroyTexture(this->text);
}

void Button::renderButton() {
	SDL_Rect renderPos = { x,y,w,h };
	SDL_RenderCopy(renderer, this->img, nullptr, &renderPos);
}

void Button::setText(const std::string& buttonText, SDL_Color textColor) {
    if (buttonText.empty()) return;
    SDL_Surface* textSurface = TTF_RenderText_Solid(mFont, buttonText.c_str(), textColor);
    if (textSurface == nullptr) {
        SDL_Log("Unable to render buttonText surface! SDL_ttf Error: %s\n", TTF_GetError());
    } else {
        this->text = SDL_CreateTextureFromSurface(renderer, textSurface);
        if (this->text == nullptr) {
            SDL_Log("Unable to create texture from rendered buttonText! SDL Error: %s\n", SDL_GetError());
        }

        // Get the dimensions of the button
        w = textSurface->w;
        h = textSurface->h;

        // Get rid of old surface
        SDL_FreeSurface(textSurface);
    }
}

