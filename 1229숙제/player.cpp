#include "player.h"
#include "board.h"

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80

PLAYER::PLAYER()
{
	x = 0;
	y = 0;
}

void PLAYER::MoveTo_Player(int num)
{
	switch (num)
	{
	case LEFT:
		if (x > 0)
		{
			x -= 1;
		}
		break;
	case RIGHT:
		if (x < WIDTH - 1)
		{
			x += 1;
		}
		break;
	case UP:
		if (y > 0)
		{
			y -= 1;
		}
		break;
	case DOWN:
		if (y < HEIGHT - 1)
		{
			y += 1;
		}
		break;
	}

}