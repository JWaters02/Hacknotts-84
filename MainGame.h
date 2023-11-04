//maingame.h
#ifndef HACKNOTTS84_MAINGAME_H
#define HACKNOTTS84_MAINGAME_H

#include <SDL.h>
#include <iostream>
#include "board.h"

class MainGame {
public:
    SDL_Texture* bg;
    bool active = false;
    BoardOfBoards boardOfBoards = BoardOfBoards({0, 0, 600, 600});

    MainGame();
    ~MainGame();
    void update();


private:
};


#endif //HACKNOTTS84_MAINGAME_H
