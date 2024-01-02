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
			cout << "�κ��丮" << endl;
			break;
		case 'c':
		case 'C':
			cout << "�ڷΰ���" << endl;
			break;
		case 'k':
		case 'K':
			cout << "��ųâ" << endl;
			break;
		case 'e':
		case 'E':
			cout << "���â" << endl;
			break;
		case space:
			cout << "��ȭŰ" << endl;
			break;
		case 224: // ����Ű ����
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

