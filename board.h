#include <vector>
class Board {
public:
	int depth;
	std::vector<std::vector<char>> board = {};
	std::vector<std::vector<Board>> boardOfBoards = {};
	Board(int depth);
	void generateBoard(int depth);
};