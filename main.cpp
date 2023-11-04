//main.cpp
#define SDL_MAIN_HANDLED
#include "globals.h"
#include "MainMenu.h"
#include "MainGame.h"
#include "Guide.h"
#include "DescrPage.h"
#include <filesystem>
#include <SDL_ttf.h>

int main() {
	SDL_Init(SDL_INIT_EVERYTHING);
	IMG_Init(IMG_INIT_PNG);
    TTF_Init();
	window = SDL_CreateWindow("noughts and crosses", 200, 200, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	mainMenu = new MainMenu();
   // mainGame = new MainGame();
   // guide = new Guide();
    //descrPage = new DescrPage();


    readTestingGameState();

	while (running) {
		SDL_RenderClear(renderer);
        switch (gameState) {
            case MAIN_MENU:
                if (mainMenu != nullptr) mainMenu->update();
                break;
            case MAIN_GAME:
                if (mainGame != nullptr) mainGame->update();
                break;
            case GUIDE:
                if (guide != nullptr) guide->update();
                break;
            case DESCR_PAGE:
                if (descrPage != nullptr) descrPage->update();
                break;
        }
		handleMainEvents();
		SDL_RenderPresent(renderer);
	}
}