#include "board.h"
Board::Board(int depth) : depth(depth) {
	if (this->depth == 0) this->isBase == true;
}

void Board::generateBoard() {
	if (this->isBase) {
		this->board = std::vector<char>(9, '-');
	}
	else {
		this->boardOfBoards = std::vector<Board>(9, Board(depth - 1));
	}
}