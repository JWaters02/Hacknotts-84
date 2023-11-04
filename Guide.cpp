#include "Guide.h"
#include "globals.h"
#include <SDL.h>

Guide::Guide() {
    this->bg = IMG_LoadTexture(renderer, R"(..\assets\images\bg.png)");
    this->active = true;
}
Guide::~Guide() {
    SDL_DestroyTexture(this->bg);
}

void Guide::update() {
    if (!this->active) return;
    SDL_RenderCopy(renderer, bg, NULL, NULL);
}