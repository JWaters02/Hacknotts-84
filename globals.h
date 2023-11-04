#include <SDL.h>
int WINDOW_WIDTH = 600;
int WINDOW_HEIGHT = 600;
bool running = true;
extern SDL_Window* window;
extern SDL_Renderer* renderer;

void handleMainEvents();