#include "extern.h"
#include "function.h"
#include"define.h"
#include<math.h>

int setup() {


	keyinput.left = 0;
	keyinput.right = 0;
	keyinput.up = 0;
	keyinput.down = 0;
	keyinput.space = 0;
	keyinput.z = 0;
	return 1;
}

int initialize()
{

	player.life = 1;
	player.score = 0;
	player.attack = 0;
	player.initime = GetNowCount();
	player.size_x = SIZE;
	player.size_y = SIZEY;
	player.attack_size_x = SIZE;
	player.attack_size_y = SIZE;
	player.x = 0;
	player.y = HEIGHT - SIZEY;
	player.vx = P_VX;
	player.vy = P_VY;

	for (int i = 0; i < player.ball_num; i++)
	{
		int ang = (360 / player.ball_num)*i;
		ball[i].x = (WIDTH - SIZE ) / 2 + cos(ang)*SIZE*3;
		ball[i].y = (HEIGHT - SIZE ) / 2 + sin(ang)*SIZE*3;
		ball[i].life = 1;
		ball[i].vx = cos(ang)*B_VX;
		ball[i].vy = sin(ang)*B_VY;
		ball[i].size_x = SIZE;
		ball[i].size_y = SIZE;
	}

	mom.x = WIDTH - SIZE;
	mom.y = SIZE;
	mom.size_x = SIZE;
	mom.size_y = SIZEY;
	mom.vx = M_VX;
	mom.vy = M_VY;
	//mom.move = 0;

	return 1;
}