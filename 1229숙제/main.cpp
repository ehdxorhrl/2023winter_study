#include <iostream>
#include <windows.h>
#include <conio.h>
#include "board.h"
#include "player.h"

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define space 32

using namespace std;
void set_position();

BOARD board;
PLAYER player;
int order;

int main()
{
	while (1) 
	{
		board.initializeBoard();
		set_position();
		board.draw_board();
		order = _getch();
		switch (order)
		{
		case 'l':
		case 'L':
			cout << "인벤토리" << endl;
			break;
		case 'c':
		case 'C':
			cout << "뒤로가기" << endl;
			break;
		case 'k':
		case 'K':
			cout << "스킬창" << endl;
			break;
		case 'e':
		case 'E':
			cout << "장비창" << endl;
			break;
		case space:
			cout << "대화키" << endl;
			break;
		case 224: // 방향키 구분
			order = _getch();
			if (order == LEFT || order == RIGHT || order == UP || order == DOWN)
			{
				player.MoveTo_Player(order);
			}
			break;
		}
		system("pause");
		system("cls");
	}

	return 0;
}

void set_position()
{
	board.board[player.y][player.x] = Player;
}

