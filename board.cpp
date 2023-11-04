#include "board.h"
#include "globals.h"

void Board::render() const {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

//    int x = boardRect.x + (boardRect.w / 3);
//    SDL_RenderDrawLine(renderer, x, boardRect.y, x, boardRect.y + boardRect.h);
//
//    int y = boardRect.y + (boardRect.h / 3);
//    SDL_RenderDrawLine(renderer, boardRect.x, y, boardRect.x + boardRect.w, y);

    SDL_RenderCopy(renderer, IMG_LoadTexture(renderer, R"(..\assets\images\board.png)"), nullptr, &boardRect);

    for (int i = 0; i < 9; ++i) {
        int row = i / 3;
        int col = i % 3;
        SDL_Rect slotRect = {
                boardRect.x + (boardRect.w / 3) * col,
                boardRect.y + (boardRect.h / 3) * row,
                boardRect.w / 3,
                boardRect.h / 3
        };

        switch (board[i]) {
            case 'X':
                SDL_RenderCopy(renderer, IMG_LoadTexture(renderer, R"(..\assets\images\x.png)"), nullptr, &slotRect);
                break;
            case 'O':
                SDL_RenderCopy(renderer, IMG_LoadTexture(renderer, R"(..\assets\images\o.png)"), nullptr, &slotRect);
                break;
        }
    }
}

void Board::reset() {
    std::fill(board.begin(), board.end(), '-');
}

Board::Board(SDL_Rect rect) : board(9, '-'), boardRect(rect) {}

void BoardOfBoards::render() const {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    for (const auto& singleBoard : boardOfBoards) {
        singleBoard.render();
    }

    SDL_RenderPresent(renderer);
}

BoardOfBoards::BoardOfBoards(SDL_Rect boardSize) : mainBoardRect(boardSize) {
    int smallBoardWidth = mainBoardRect.w / 3;
    int smallBoardHeight = mainBoardRect.h / 3;

    for (int i = 0; i < 9; ++i) {
        int row = i / 3;
        int col = i % 3;
        SDL_Rect rect = {
                mainBoardRect.x + col * smallBoardWidth,
                mainBoardRect.y + row * smallBoardHeight,
                smallBoardWidth,
                smallBoardHeight
        };
        boardOfBoards.emplace_back(rect);
    }
}

void BoardOfBoards::generateBoard() {
    for (auto& singleBoard : boardOfBoards) {
        singleBoard.reset();
    }
}
