#include"DxLib.h"
#include"extern.h"
#include"function.h"


void draw()
{

	ClearDrawScreen();
	keystate();

	switch (flag)
	{
	case title1:
		DrawGraph(0, 0, imglist.img_title1, TRUE);
		break;

	case title2:
		DrawGraph(0, 0, imglist.img_title2, TRUE);
		break;

	case title4:
		DrawGraph(0, 0, imglist.img_title4, TRUE);
		break;

	case rule:
		DrawGraph(0, 0, imglist.img_rule, TRUE);
		break;


	case gameplay1:

		//ｱｳｾｰ､ﾎﾃ霆ｭ
		DrawGraph(0, 0, imglist.img_floor, TRUE);

		//･ﾗ･・､･茫`､ﾎﾉﾏﾏﾂﾗﾒ､ﾎ・､ｭ､ﾎﾃ霆ｭ
		if (keyinput.left)
		{
			if (key[KEY_INPUT_LEFT])
			{
				if (keyinput.left > 81)keyinput.left = 1;
				if (keyinput.left <= 21 || keyinput.left > 41 && keyinput.left <= 61)DrawGraph(player.x, player.y, imglist.img_player3, TRUE);
				if (keyinput.left > 21 && keyinput.left <= 41)DrawGraph(player.x, player.y, imglist.img_player3_1, TRUE);
				if (keyinput.left > 61 && keyinput.left <= 81)DrawGraph(player.x, player.y, imglist.img_player3_2, TRUE);
			}

			else
			{
				DrawGraph(player.x, player.y, imglist.img_player3, TRUE);
			}
		}

		else if (keyinput.right)
		{
			if (key[KEY_INPUT_RIGHT])
			{
				if (keyinput.right > 81)keyinput.right = 1;
				if (keyinput.right <= 21 || keyinput.right > 41 && keyinput.right <= 61)DrawGraph(player.x, player.y, imglist.img_player4, TRUE);
				if (keyinput.right > 21 && keyinput.right <= 41)DrawGraph(player.x, player.y, imglist.img_player4_1, TRUE);
				if (keyinput.right > 61 && keyinput.right <= 81)DrawGraph(player.x, player.y, imglist.img_player4_2, TRUE);
			}

			else
			{
				DrawGraph(player.x, player.y, imglist.img_player4, TRUE);
			}
		}

		else if (keyinput.up)
		{
			if (key[KEY_INPUT_UP])
			{
				if (keyinput.up > 81)keyinput.up = 1;
				if (keyinput.up <= 21 || keyinput.up > 41 && keyinput.up <= 61)DrawGraph(player.x, player.y, imglist.img_player1, TRUE);
				if (keyinput.up > 21 && keyinput.up <= 41)DrawGraph(player.x, player.y, imglist.img_player1_1, TRUE);
				if (keyinput.up > 61 && keyinput.up <= 81)DrawGraph(player.x, player.y, imglist.img_player1_2, TRUE);
			}

			else
			{
				DrawGraph(player.x, player.y, imglist.img_player1, TRUE);
			}
		}

		else if (keyinput.down)
		{
			if (key[KEY_INPUT_DOWN])
			{
				if (keyinput.down > 81)keyinput.down = 1;
				if (keyinput.down <= 21 || keyinput.down > 41 && keyinput.down <= 61)DrawGraph(player.x, player.y, imglist.img_player2, TRUE);
				if (keyinput.down > 21 && keyinput.down <= 41)DrawGraph(player.x, player.y, imglist.img_player2_1, TRUE);
				if (keyinput.down > 61 && keyinput.down <= 81)DrawGraph(player.x, player.y, imglist.img_player2_2, TRUE);
			}

			else
			{
				DrawGraph(player.x, player.y, imglist.img_player2, TRUE);
			}
		}

		else DrawGraph((int)player.x, (int)player.y, imglist.img_player4, TRUE);

		//ｹ･篤､ﾎﾃ霆ｭ
		if (keyinput.space)
		{
			if (keyinput.right) {
				if (keyinput.space > 61)keyinput.space = 1;
				if (keyinput.space <= 11)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_1, TRUE);
				if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_2, TRUE);
				if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_3, TRUE);
				if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_4, TRUE);
				if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_5, TRUE);
				if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_6, TRUE);
			}


			if (keyinput.left) {				
				if (keyinput.space > 61)keyinput.space = 1;
				if (keyinput.space <= 11)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_1, TRUE);
				if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_2, TRUE);
				if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_3, TRUE);
				if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_4, TRUE);
				if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_5, TRUE);
				if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_6, TRUE);
			}

			if (keyinput.left == 0 && keyinput.right == 0)
			{
				if (keyinput.up) {
					if (player.y > 2*SIZE) {
						if (keyinput.space > 61)keyinput.space = 1;
						if (keyinput.space <= 11)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_1, TRUE);
						if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_2, TRUE);
						if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_3, TRUE);
						if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_4, TRUE);
						if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_5, TRUE);
						if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_6, TRUE);
					}
				}

				if (keyinput.down) {
					if (keyinput.space > 61)keyinput.space = 1;
					if (keyinput.space <= 11)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_1, TRUE);
					if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_2, TRUE);
					if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_3, TRUE);
					if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_4, TRUE);
					if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_5, TRUE);
					if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_6, TRUE);
				}

				if (keyinput.down == 0 && keyinput.up == 0) {
					if (keyinput.space > 61)keyinput.space = 1;
					if (keyinput.space <= 11)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_1, TRUE);
					if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_2, TRUE);
					if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_3, TRUE);
					if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_4, TRUE);
					if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_5, TRUE);
					if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_6, TRUE);
				}
			}
		}

		//ﾄｸ､ﾎ・､ｭ､ﾎﾃ霆ｭ
		if (mom.vx <= -1)
		{
		mom.move++;
			if (mom.move > 40)mom.move = 0;
			if (mom.move <= 10 || mom.move > 20 && mom.move <= 30 )DrawGraph(mom.x, mom.y, imglist.img_mom3, TRUE);
			if (mom.move > 10 && mom.move <= 20)DrawGraph(mom.x, mom.y, imglist.img_mom3_1, TRUE);
			if (mom.move > 30 && mom.move <= 40)DrawGraph(mom.x, mom.y, imglist.img_mom3_2, TRUE);
		}

		else if (mom.vx >= 1)
		{
		mom.move++;
			if (mom.move > 40)mom.move = 0;
			if (mom.move <= 10 || mom.move > 20 && mom.move <= 30)DrawGraph(mom.x, mom.y, imglist.img_mom4, TRUE);
			if (mom.move > 10 && mom.move <= 20)DrawGraph(mom.x, mom.y, imglist.img_mom4_1, TRUE);
			if (mom.move > 30 && mom.move <= 40)DrawGraph(mom.x, mom.y, imglist.img_mom4_2, TRUE);
		}

		else if (mom.vy < 0)
		{
		mom.move++;
			if (mom.move > 40)mom.move = 0;
			if (mom.move <= 10 || mom.move > 20 && mom.move <= 30)DrawGraph(mom.x, mom.y, imglist.img_mom1, TRUE);
			if (mom.move > 10 && mom.move <= 20)DrawGraph(mom.x, mom.y, imglist.img_mom1_1, TRUE);
			if (mom.move > 30 && mom.move <= 40)DrawGraph(mom.x, mom.y, imglist.img_mom1_2, TRUE);
		}

		else if (mom.vy > 0)
		{
		mom.move++;
			if (mom.move > 40)mom.move = 0;
			if (mom.move <= 10 || mom.move > 20 && mom.move <= 30)DrawGraph(mom.x, mom.y, imglist.img_mom2, TRUE);
			if (mom.move > 10 && mom.move <= 20)DrawGraph(mom.x, mom.y, imglist.img_mom2_1, TRUE);
			if (mom.move > 30 && mom.move <= 40)DrawGraph(mom.x, mom.y, imglist.img_mom2_2, TRUE);
		}

		else DrawGraph((int)mom.x, (int)mom.y, imglist.img_mom3, TRUE);

		//･ﾜｩ`･・ﾎﾃ霆?
		for (int i = 0; i < player.ball_num; i++)
		{

			if (ball[i].life)
			{
				DrawGraph((int)ball[i].x, (int)ball[i].y, imglist.img_ball, TRUE);
			}
		}

		//･ｹ･ｳ･｢｡｢･ｿ･､･爨ﾎﾃ霆ｭ
		DrawFormatString(800, 0, white, "Score:%d", player.score);
		DrawFormatString(50, 0, white, "Time:%d", (TIME - (GetNowCount() - player.initime)) / 1000);

		break;

		case gameplay2:

			//ｱｳｾｰ､ﾎﾃ霆ｭ
			DrawGraph(0, 0, imglist.img_floor, TRUE);

			//･ﾗ･・､･茫`､ﾎﾉﾏﾏﾂﾗﾒ､ﾎ・､ｭ､ﾎﾃ霆ｭ
			if (keyinput.left)
			{
				if (key[KEY_INPUT_LEFT])
				{
					if (keyinput.left > 81)keyinput.left = 1;
					if (keyinput.left <= 21 || keyinput.left > 41 && keyinput.left <= 61)DrawGraph(player.x, player.y, imglist.img_player3, TRUE);
					if (keyinput.left > 21 && keyinput.left <= 41)DrawGraph(player.x, player.y, imglist.img_player3_1, TRUE);
					if (keyinput.left > 61 && keyinput.left <= 81)DrawGraph(player.x, player.y, imglist.img_player3_2, TRUE);
				}

				else
				{
					DrawGraph(player.x, player.y, imglist.img_player3, TRUE);
				}
			}

			else if (keyinput.right)
			{
				if (key[KEY_INPUT_RIGHT])
				{
					if (keyinput.right > 81)keyinput.right = 1;
					if (keyinput.right <= 21 || keyinput.right > 41 && keyinput.right <= 61)DrawGraph(player.x, player.y, imglist.img_player4, TRUE);
					if (keyinput.right > 21 && keyinput.right <= 41)DrawGraph(player.x, player.y, imglist.img_player4_1, TRUE);
					if (keyinput.right > 61 && keyinput.right <= 81)DrawGraph(player.x, player.y, imglist.img_player4_2, TRUE);
				}

				else
				{
					DrawGraph(player.x, player.y, imglist.img_player4, TRUE);
				}
			}

			else if (keyinput.up)
			{
				if (key[KEY_INPUT_UP])
				{
					if (keyinput.up > 81)keyinput.up = 1;
					if (keyinput.up <= 21 || keyinput.up > 41 && keyinput.up <= 61)DrawGraph(player.x, player.y, imglist.img_player1, TRUE);
					if (keyinput.up > 21 && keyinput.up <= 41)DrawGraph(player.x, player.y, imglist.img_player1_1, TRUE);
					if (keyinput.up > 61 && keyinput.up <= 81)DrawGraph(player.x, player.y, imglist.img_player1_2, TRUE);
				}

				else
				{
					DrawGraph(player.x, player.y, imglist.img_player1, TRUE);
				}
			}

			else if (keyinput.down)
			{
				if (key[KEY_INPUT_DOWN])
				{
					if (keyinput.down > 81)keyinput.down = 1;
					if (keyinput.down <= 21 || keyinput.down > 41 && keyinput.down <= 61)DrawGraph(player.x, player.y, imglist.img_player2, TRUE);
					if (keyinput.down > 21 && keyinput.down <= 41)DrawGraph(player.x, player.y, imglist.img_player2_1, TRUE);
					if (keyinput.down > 61 && keyinput.down <= 81)DrawGraph(player.x, player.y, imglist.img_player2_2, TRUE);
				}

				else
				{
					DrawGraph(player.x, player.y, imglist.img_player2, TRUE);
				}
			}

			else DrawGraph((int)player.x, (int)player.y, imglist.img_player4, TRUE);

			//ｹ･篤､ﾎﾃ霆ｭ
			if (keyinput.space)
			{
				if (keyinput.right) {
					if (keyinput.space > 61)keyinput.space = 1;
					if (keyinput.space <= 11)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_1, TRUE);
					if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_2, TRUE);
					if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_3, TRUE);
					if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_4, TRUE);
					if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_5, TRUE);
					if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_6, TRUE);
				}


				if (keyinput.left) {
					if (keyinput.space > 61)keyinput.space = 1;
					if (keyinput.space <= 11)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_1, TRUE);
					if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_2, TRUE);
					if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_3, TRUE);
					if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_4, TRUE);
					if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_5, TRUE);
					if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x - player.attack_size_x, player.y, imglist.img_attack3_6, TRUE);
				}

				if (keyinput.left == 0 && keyinput.right == 0)
				{
					if (keyinput.up) {
						if (player.y > 2 * SIZE) {
							if (keyinput.space > 61)keyinput.space = 1;
							if (keyinput.space <= 11)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_1, TRUE);
							if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_2, TRUE);
							if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_3, TRUE);
							if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_4, TRUE);
							if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_5, TRUE);
							if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x, player.y - player.attack_size_y, imglist.img_attack1_6, TRUE);
						}
					}

					if (keyinput.down) {
						if (keyinput.space > 61)keyinput.space = 1;
						if (keyinput.space <= 11)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_1, TRUE);
						if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_2, TRUE);
						if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_3, TRUE);
						if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_4, TRUE);
						if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_5, TRUE);
						if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x, player.y + player.size_y, imglist.img_attack2_6, TRUE);
					}

					if (keyinput.down == 0 && keyinput.up == 0) {
						if (keyinput.space > 61)keyinput.space = 1;
						if (keyinput.space <= 11)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_1, TRUE);
						if (keyinput.space > 11 && keyinput.space <= 21)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_2, TRUE);
						if (keyinput.space > 21 && keyinput.space <= 31)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_3, TRUE);
						if (keyinput.space > 31 && keyinput.space <= 41)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_4, TRUE);
						if (keyinput.space > 41 && keyinput.space <= 51)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_5, TRUE);
						if (keyinput.space > 51 && keyinput.space <= 61)DrawGraph(player.x + player.size_x, player.y, imglist.img_attack4_6, TRUE);
					}
				}
			}

			//ﾄｸ､ﾎ・､ｭ､ﾎﾃ霆ｭ
			if (mom.vx <= -1)
			{
				mom.move++;
				if (mom.move > 40)mom.move = 0;
				if (mom.move <= 10 || mom.move > 20 && mom.move <= 30)DrawGraph(mom.x, mom.y, imglist.img_mom3, TRUE);
				if (mom.move > 10 && mom.move <= 20)DrawGraph(mom.x, mom.y, imglist.img_mom3_1, TRUE);
				if (mom.move > 30 && mom.move <= 40)DrawGraph(mom.x, mom.y, imglist.img_mom3_2, TRUE);
			}

			else if (mom.vx >= 1)
			{
				mom.move++;
				if (mom.move > 40)mom.move = 0;
				if (mom.move <= 10 || mom.move > 20 && mom.move <= 30)DrawGraph(mom.x, mom.y, imglist.img_mom4, TRUE);
				if (mom.move > 10 && mom.move <= 20)DrawGraph(mom.x, mom.y, imglist.img_mom4_1, TRUE);
				if (mom.move > 30 && mom.move <= 40)DrawGraph(mom.x, mom.y, imglist.img_mom4_2, TRUE);
			}

			else if (mom.vy < 0)
			{
				mom.move++;
				if (mom.move > 40)mom.move = 0;
				if (mom.move <= 10 || mom.move > 20 && mom.move <= 30)DrawGraph(mom.x, mom.y, imglist.img_mom1, TRUE);
				if (mom.move > 10 && mom.move <= 20)DrawGraph(mom.x, mom.y, imglist.img_mom1_1, TRUE);
				if (mom.move > 30 && mom.move <= 40)DrawGraph(mom.x, mom.y, imglist.img_mom1_2, TRUE);
			}

			else if (mom.vy > 0)
			{
				mom.move++;
				if (mom.move > 40)mom.move = 0;
				if (mom.move <= 10 || mom.move > 20 && mom.move <= 30)DrawGraph(mom.x, mom.y, imglist.img_mom2, TRUE);
				if (mom.move > 10 && mom.move <= 20)DrawGraph(mom.x, mom.y, imglist.img_mom2_1, TRUE);
				if (mom.move > 30 && mom.move <= 40)DrawGraph(mom.x, mom.y, imglist.img_mom2_2, TRUE);
			}

			else DrawGraph((int)mom.x, (int)mom.y, imglist.img_mom3, TRUE);

			//･ﾜｩ`･・ﾎﾃ霆?
			for (int i = 0; i < player.ball_num; i++)
			{

				if (ball[i].life)
				{
					DrawGraph((int)ball[i].x, (int)ball[i].y, imglist.img_ball, TRUE);
				}
			}

			//･ｹ･ｳ･｢｡｢･ｿ･､･爨ﾎﾃ霆ｭ
			DrawFormatString(800, 0, white, "Score:%d", player.score);
			DrawFormatString(50, 0, white, "Time:%d", (TIME - (GetNowCount() - player.initime)) / 1000);

			break;

	case score_mom:
		DrawGraph(0, 0, imglist.img_score_mom, TRUE);

		DrawFormatString((WIDTH / 2) - 80, HEIGHT / 2 - 60, black, "Score:%d", player.score);
		break;

	case score_ball:
		DrawGraph(0, 0, imglist.img_score_ball, TRUE);

		DrawFormatString((WIDTH / 2) - 80, HEIGHT / 2 - 60, black, "Score:%d", player.score);
		break;

	case score_time:
		DrawGraph(0, 0, imglist.img_score_time, TRUE);

		DrawFormatString((WIDTH / 2) - 80, HEIGHT / 2 - 60, black, "Score:%d", player.score);
		break;

	case perfect:
		DrawGraph(0, 0, imglist.img_perfect, TRUE);
		DrawFormatString((WIDTH / 2) - 80, HEIGHT / 2 - 60, black, "Score:%d", player.score);
		break;
	}

	ScreenFlip();
}