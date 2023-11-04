#ifndef HACKNOTTS84_GUIDE_H
#define HACKNOTTS84_GUIDE_H

#include <SDL.h>
#include <iostream>

class Guide {
public:
    SDL_Texture* bg;
    bool active = false;
    Guide();
    ~Guide();
    void update();


private:
};


#endif //HACKNOTTS84_GUIDE_H
