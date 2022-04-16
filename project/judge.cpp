#include"DxLib.h"
#include"extern.h"
#include"function.h"




void judge_ball_to_player()
{

	for (int i = 0; i < player.ball_num; i++)
	{

		if (ball[i].life != 0)
		{

			if (ball[i].x < player.x + player.size_x - 6 &&
				ball[i].x + ball[i].size_x > player.x + 6 &&
				ball[i].y < player.y + player.size_y - 6 &&
				ball[i].y + ball[i].size_y > player.y + 6)
			{
				player.life = 0;
				ball[i].life = 0;
			}
		}
	}
}



void judge_player_to_ball()
{
	keystate();
	int dire = 0;
	if (keyinput.up&&keyinput.right) dire = 14;
	else if (keyinput.up&&keyinput.left) dire = 13;
	else if (keyinput.down&&keyinput.right) dire = 24;
	else if (keyinput.down&&keyinput.left) dire = 23;
	else if (keyinput.right) dire = 4;
	else if (keyinput.left)dire = 3;
	else if (keyinput.down)dire = 2;
	else if (keyinput.up)dire = 1;
	else dire = 88;

	for (int i = 0; i < player.ball_num; i++)
	{
		if (ball[i].life != 0)
		{
			if (keyinput.space)
			{
				switch (dire)
				{
				case 0:
					break;

				case 1:
					if (player.x-6 < ball[i].x + ball[i].size_x &&
						player.x + player.size_x +6> ball[i].x &&
						player.y - player.attack_size_y - ball[i].size_y-6 < ball[i].y &&
						player.y +6> ball[i].y + ball[i].size_y)
					{
						ball[i].life = 0;
						player.score += 10;
					}
					break;

				case 2:
					if (player.x-6 < ball[i].x + ball[i].size_x &&
						player.x + player.size_x+6 > ball[i].x &&
						player.y + player.size_y -6< ball[i].y &&
						player.y + player.size_y + player.attack_size_y + ball[i].size_y +6> ball[i].y + ball[i].size_y)
					{
						ball[i].life = 0;
						player.score += 10;
					}
					break;

				case 3:
					if (player.x - player.attack_size_x - ball[i].size_x -6< ball[i].x &&
						player.x +6> ball[i].x + ball[i].size_x&&
						player.y -6< ball[i].y + ball[i].size_y &&
						player.y + player.size_y+6 > ball[i].y)
					{
						ball[i].life = 0;
						player.score += 10;
					}
					break;

				case 4:
					if (player.x + player.size_x-6 < ball[i].x &&
						player.x + player.size_x + player.attack_size_x + ball[i].size_x+6> ball[i].x + ball[i].size_x&&
						player.y -6< ball[i].y + ball[i].size_y &&
						player.y + player.size_y+6 > ball[i].y)
					{
						ball[i].life = 0;
						player.score += 10;
					}
					break;

				case 13:
					if (player.x - player.attack_size_x - ball[i].size_x -6< ball[i].x &&
						player.x +6> ball[i].x + ball[i].size_x&&
						player.y -6< ball[i].y + ball[i].size_y &&
						player.y + player.size_y +6> ball[i].y)
					{
						ball[i].life = 0;
						player.score += 10;
					}

					break;

				case 14:
					if (player.x + player.size_x -6< ball[i].x &&
						player.x + player.size_x + player.attack_size_x + ball[i].size_x +6> ball[i].x + ball[i].size_x&&
						player.y -6< ball[i].y + ball[i].size_y &&
						player.y + player.size_y +6> ball[i].y)
					{
						ball[i].life = 0;
						player.score += 10;
					}

					break;

				case 23:
					if (player.x - player.attack_size_x - ball[i].size_x -6< ball[i].x &&
						player.x +6> ball[i].x + ball[i].size_x&&
						player.y -6< ball[i].y + ball[i].size_y &&
						player.y + player.size_y +6> ball[i].y)
					{
						ball[i].life = 0;
						player.score += 10;
					}

					break;

				case 24:
					if (player.x + player.size_x -6< ball[i].x &&
						player.x + player.size_x + player.attack_size_x + ball[i].size_x+6> ball[i].x + ball[i].size_x&&
						player.y -6< ball[i].y + ball[i].size_y &&
						player.y + player.size_y +6> ball[i].y)
					{
						ball[i].life = 0;
						player.score += 10;
					}

					break;

				case 88:
					if (player.x -6< ball[i].x + ball[i].size_x &&
						player.x + player.size_x +6> ball[i].x &&
						player.y + player.size_y -6< ball[i].y &&
						player.y + player.size_y + player.attack_size_y + ball[i].size_y +6> ball[i].y + ball[i].size_y)
					{
						ball[i].life = 0;
						player.score += 10;
					}
					break;
				}
			}
		}
	}
}

void judge_mom_to_player()
{
	if (mom.x < player.x + player.size_x - 6 &&
		mom.x + mom.size_x > player.x + 6 &&
		mom.y < player.y + player.size_y - 6 &&
		mom.y + mom.size_y > player.y + 6)
	{
		player.life = 10;
	}
}