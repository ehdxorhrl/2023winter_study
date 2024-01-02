#include <iostream>
#include "board.h"

using namespace std;

void BOARD::initializeBoard()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			board[i][j] = None;
		}
	}
}

void BOARD::draw_board()
{
	for (int i = 0; i < WIDTH; i++)
	{
		cout << '-';
	}
	cout << endl;
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (board[i][j] == None)
			{
				cout << "X";
			}
			else if (board[i][j] == Player)
			{
				cout << "@";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < WIDTH; i++)
	{
		cout << '-';
	}
	cout << endl;

	cout << "===============================================================" << endl;
	cout << "K: ��ųâ, L: �κ��丮, E: ���â, SP: ��ȭ�ϱ�, C: �ڷΰ���" << endl;
	cout << "===============================================================" << endl;
}