#include <SDL.h>
#include <SDL_ttf.h>
#include <iostream>

class Button {
private:
	SDL_Texture* img = nullptr;
    TTF_Font* mFont = nullptr;

public:
	int x;
	int y;
	int w;
	int h;
	int scale = 1;

	void setImg(std::string imgPath);
    void setText(std::string text, SDL_Color textColor);

	Button(int x, int y, int w, int h, std::string imgPath, std::string text = "");
	~Button();

	virtual void onleftClick() {

	}

	virtual void rightClick() {

	}

	bool checkCollision(int X, int Y);

	virtual void renderButton();
};