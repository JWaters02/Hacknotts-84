#include "globals.h"

int WINDOW_WIDTH = 600;
int WINDOW_HEIGHT = 600;
bool running = true;
SDL_Window* window;
SDL_Renderer* renderer;
int gameState = -1;
MainMenu* mainMenu = nullptr;
MainGame* mainGame=nullptr;
Guide* guide=nullptr;
DescrPage* descrPage = nullptr;
MiniGame* miniGame = nullptr;

void readTestingGameState() {
    std::ifstream file("../window.txt");

    if (!file) {
        std::cerr << "Unable to open file" << std::endl;
    } else {
        file >> gameState;
        file.close();
    }
}
