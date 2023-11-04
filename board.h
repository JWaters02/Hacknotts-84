#include <vector>
class Board {
public:
	int depth = 0;
	bool isBase = true; //is board to play noughts and crosses in and not board containing more boards
	std::vector<char> board = {};
	std::vector<Board> boardOfBoards = {};
	Board(int depth);
	void generateBoard();
};