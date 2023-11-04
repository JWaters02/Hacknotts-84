//maingame.h
#ifndef HACKNOTTS84_MAINGAME_H
#define HACKNOTTS84_MAINGAME_H

#include <SDL.h>
#include <iostream>

class MainGame {
public:
    SDL_Texture* bg;
    bool active = false;
    MainGame();
    ~MainGame();
    void update();


private:
};


#endif //HACKNOTTS84_MAINGAME_H
