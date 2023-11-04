#pragma once 
#include <SDL.h>
#include <SDL_ttf.h>
#include <iostream>

class Button {
private:
	SDL_Texture* img = nullptr;
    SDL_Texture* text = nullptr;
    TTF_Font* mFont = nullptr;

public:
	int x;
	int y;
	int w;
	int h;
	int scale = 1;

	void setImg(const std::string& imgPath);
    void setText(const std::string& buttonText, SDL_Color textColor);

	Button(int x, int y, int w, int h,
           TTF_Font* font,
           const std::string& imgPath,
           const std::string& text = "",
           SDL_Color textColour = {206, 74, 74, 255});
	~Button();

	virtual void onleftClick() {

	}

	virtual void rightClick() {

	}

	bool checkCollision(int X, int Y);

	virtual void renderButton();
};