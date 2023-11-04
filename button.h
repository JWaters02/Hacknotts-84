#include <SDL.h>
#include <iostream>

class Button {
private:
	SDL_Texture* img = nullptr;
public:
	int x;
	int y;
	int w;
	int h;
	int scale = 1;

	void setImg(std::string imgPath);
	Button(int x, int y, int w, int h, std::string imgPath);
	~Button();

	virtual void setText();

	virtual void onleftClick() {

	}

	virtual void rightClick() {

	}

	bool checkCollision(int X, int Y);

	virtual void renderButton();
};