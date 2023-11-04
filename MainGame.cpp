//maingame.cpp
#include "MainGame.h"
#include <SDL.h>
#include "globals.h"

MainGame::MainGame() {
    this->bg = IMG_LoadTexture(renderer, R"(..\assets\images\bg.png)");
    this->active = true;
    this->boardOfBoards = BoardOfBoards({200, 200, 600, 600});
    this->boardOfBoards.generateBoard();
}
MainGame::~MainGame() {
    SDL_DestroyTexture(this->bg);
}

void MainGame::update() {
    if (!this->active) return;
    SDL_RenderCopy(renderer, bg, NULL, NULL);
    boardOfBoards.render();
}