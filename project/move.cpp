#include"DxLib.h"
#include"extern.h"
#include"function.h"
#include<math.h>


void move_player()
{
	keystate();

	if (key[KEY_INPUT_RIGHT]) player.x += player.vx;
	if (key[KEY_INPUT_LEFT]) player.x -= player.vx;
	if (key[KEY_INPUT_DOWN]) player.y += player.vy;
	if (key[KEY_INPUT_UP]) player.y -= player.vy;


	if (player.x < 0) player.x = 0;
	if (player.x + (double)player.size_x > WIDTH) player.x = WIDTH - player.size_x;
	if (player.y < 0 + SIZE) player.y = player.y = SIZE;
	if (player.y + (double)player.size_y > HEIGHT) player.y = HEIGHT - player.size_y;

}






void move_ball()
{

	for (int i = 0; i < player.ball_num; i++)
	{

		if (ball[i].life)
		{
			ball[i].x += ball[i].vx;
			ball[i].y += ball[i].vy;
			if (ball[i].x < 0)
			{
				ball[i].x = 0;
				ball[i].vx = -ball[i].vx;
			}
			if (ball[i].x + (double)ball[i].size_x > WIDTH)
			{
				ball[i].x = WIDTH - ball[i].size_x;
				ball[i].vx = -ball[i].vx;
			}
			if (ball[i].y < 0 + SIZE)
			{
				ball[i].y = ball[i].y = SIZE;
				ball[i].vy = -ball[i].vy;
			}
			if (ball[i].y + (double)ball[i].size_y > HEIGHT)
			{
				ball[i].y = HEIGHT - ball[i].size_y;
				ball[i].vy = -ball[i].vy;
			}

			//•‹©`•ÅE¨ƒ∏§Àµ±§ø§√§øïr§ŒÅE§≠
			if (ball[i].x <= mom.x + mom.size_x &&
				ball[i].x + ball[i].size_x >= mom.x &&
				ball[i].y <= mom.y + mom.size_y &&
				ball[i].y + ball[i].size_y >= mom.y)
			{
				///*
				if (ball[i].x < mom.x + mom.size_x / 2) { ball[i].x -= 4; }
				else if (ball[i].x >= mom.x + mom.size_x / 2) { ball[i].x += 4; }
				if (ball[i].y < mom.y + mom.size_y / 2) { ball[i].y -= 4; }
				else if (ball[i].y >= mom.y + mom.size_y / 2) { ball[i].y += 4; }

				//*/
				ball[i].vx = -ball[i].vx;
				ball[i].vy = -ball[i].vy;
			}

			//•‹©`•ÅE¨ ø§¨µ±§ø§√§øïr§ŒÅE§≠
			for (int j = 0; j < player.ball_num; j++)
			{
				if (j == i || ball[j].life == 0)
					break;
				else {
					if (ball[i].x <= ball[j].x + ball[j].size_x &&
						ball[i].x + ball[i].size_x >= ball[j].x &&
						ball[i].y <= ball[j].y + ball[j].size_y &&
						ball[i].y + ball[i].size_y >= ball[j].y)
					{
						///*
						if (ball[i].x < ball[j].x + ball[j].size_x / 2) { ball[i].x -= 4; }
						else if (ball[i].x >= ball[j].x + ball[j].size_x / 2) { ball[i].x += 4; }
						if (ball[i].y < ball[j].y + ball[j].size_y / 2) { ball[i].y -= 4; }
						else if (ball[i].y >= ball[j].y + ball[j].size_y / 2) { ball[i].y += 4; }
						//*/

						ball[i].vx = -ball[i].vx;
						ball[i].vy = -ball[i].vy;
					}

				}
			}

		}
	}
}


void move_mom()
{
	double ang;
	mom.x += mom.vx;
	mom.y += mom.vy;

	ang = atan2((double)((player.y + player.size_y / 2) - (mom.y + mom.size_y)), (double)((player.x + player.size_x / 2) - (mom.x + mom.size_x / 2)));
	mom.vx = cos(ang)*M_VX;
	mom.vy = sin(ang)*M_VY;

}

