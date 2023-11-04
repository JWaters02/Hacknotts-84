#include <vector>
#include <iostream>
#include <SDL.h>

class Board {
private:
    std::vector<char> board;
    SDL_Rect boardRect;

public:
    explicit Board(SDL_Rect rect);

    void reset();
    void render() const;
};

class BoardOfBoards {
private:
    std::vector<Board> boardOfBoards;
    SDL_Rect mainBoardRect;

public:
    explicit BoardOfBoards(SDL_Rect boardSize);

    void generateBoard();
    void render() const;
};