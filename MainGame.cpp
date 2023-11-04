//maingame.cpp
#include "MainGame.h"
#include "globals.h"
#include <SDL.h>

MainGame::MainGame() {
    this->bg = IMG_LoadTexture(renderer, R"(..\assets\images\bg.png)");
    this->active = true;
}
MainGame::~MainGame() {
    SDL_DestroyTexture(this->bg);
}

void MainGame::update() {
    if (!this->active) return;
    SDL_RenderCopy(renderer, bg, NULL, NULL);
}