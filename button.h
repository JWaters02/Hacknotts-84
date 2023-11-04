#pragma once 
#include <SDL.h>
#include <SDL_ttf.h>
#include <iostream>

class Button {
private:
	SDL_Texture* img = nullptr;
    SDL_Texture* text = nullptr;
	TTF_Font* font = nullptr;
	std::string imgPath;

public:
	int x;
	int y;
	int w;
	int h;
	int scale = 1;
	void (*leftClickFunction)();
	void (*rightClickFunction)();
	
	void setImg(const std::string& imgPath);
    void setText(std::string buttonText, SDL_Color textColor);

	

	Button();
	Button(int x, int y, int w, int h,std::string imgPath, void(*leftclickFunc)() = nullptr, void(*rightClickFunc)() = nullptr,std::string text = "",std::string fontPath="",double textScale=1,SDL_Color textColour = {206, 74, 74, 255});
	~Button();

	virtual void onleftClick() {
		if (this->leftClickFunction != nullptr) this->leftClickFunction();
	}

	virtual void onRightClick() {
		if (this->rightClickFunction != nullptr) this->rightClickFunction();
	}

	bool checkCollision(int X, int Y);
	bool getMouseCollision();
	virtual void renderButton();

	void handleMouseEvent();
};