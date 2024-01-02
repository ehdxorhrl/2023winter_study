#ifndef BOARD_H
#define BOARD_H

#define WIDTH 15
#define HEIGHT 10

enum 
{
	None = 0,
	Player
};

class BOARD
{
public:
	int board[HEIGHT][WIDTH] = { None }; // 가로 15, 세로 10
	void initializeBoard();
	void draw_board();
};

#endif BOARD_H