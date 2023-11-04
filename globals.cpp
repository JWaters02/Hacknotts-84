#include "globals.h"

int WINDOW_WIDTH = 600;
int WINDOW_HEIGHT = 600;
bool running = true;
SDL_Window* window;
SDL_Renderer* renderer;
int gameState = -1;
MainMenu* mainMenu = nullptr;

void readTestingGameState() {
    std::ifstream file("window.txt");;
    file >> gameState;
    file.close();
}
