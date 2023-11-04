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
    std::cout << SDL_GetError();
}

Button::Button(int x, int y, int w, int h, std::string imgPath, void(*leftclickFunc)(),void(*rightClickFunc)(), std::string text, std::string fontPath,double textScale, SDL_Color textColour) : x(x), y(y), w(w), h(h) {
    this->imgPath = imgPath;
    this->setImg(this->imgPath);
    if (fontPath != "") this->font = TTF_OpenFont(fontPath.c_str(), 31);
    this->setText(text, textColour);
    this->leftClickFunction = leftclickFunc;
    this->rightClickFunction = rightClickFunc;
    
}

Button::Button() : x(0), y(0), w(0), h(0) {
}

Button::~Button() {
	if (this->img != nullptr) SDL_DestroyTexture(this->img);
    if (this->text != nullptr) SDL_DestroyTexture(this->text);
    if (this->font != nullptr) TTF_CloseFont(font);
}

void Button::renderButton() {
    SDL_Rect renderPos = { x,y,w,h };
    SDL_RenderCopy(renderer, this->img, NULL, &renderPos);
    SDL_RenderCopy(renderer, this->text, NULL, NULL);
}

void Button::setText(std::string buttonText, SDL_Color textColor) {


    if (buttonText == "") return;
  
    if (this->font == nullptr) return;
    SDL_Surface* textSurface = TTF_RenderText_Solid(this->font, buttonText.c_str(), textColor);
    this->text = SDL_CreateTextureFromSurface(renderer, textSurface);
    SDL_FreeSurface(textSurface);
    std::cout << "bruh";
    std::cout << SDL_GetError() << "\n";
}



bool Button::getMouseCollision() {
    int x;
    int y;
    SDL_GetMouseState(&x, &y);
    return this->checkCollision(x, y);
}

void Button::handleMouseEvent() {
    int x;
    int y;
    Uint32 btn=SDL_GetMouseState(&x, &y);
    if (this->checkCollision(x, y)) {
        if (btn & SDL_BUTTON(SDL_BUTTON_LEFT)) this->onleftClick();
        if (btn & SDL_BUTTON(SDL_BUTTON_RIGHT)) this->onRightClick();
    }
}