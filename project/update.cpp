#include"Dxlib.h"
#include"extern.h"
#include"function.h"		

void update() {

	keystate();

	switch (flag) {

	case title1:
		if (keyinput.down >= 10)
		{
			setup();
			flag = title2;
		}

		if (keyinput.up >= 10)
		{
			setup();
			flag = title4;
		}

		if (keyinput.space)
		{
			player.ball_num = BALL / 2;
			initialize();
			setup();		
			PlaySound("bgm/PerituneMaterial_Chinatown_loop.ogg", DX_PLAYTYPE_LOOP);
			flag = gameplay1;
		}

		break;

	case title2:
		if (keyinput.down >= 10)
		{
			setup();
			flag = title4;
		}

		if (keyinput.up >= 10)
		{
			setup();
			flag = title1;
		}

		if (keyinput.space)
		{
			player.ball_num = BALL;
			initialize();
			setup();
			PlaySound("bgm/PerituneMaterial_Chinatown_loop.ogg", DX_PLAYTYPE_LOOP);
			flag = gameplay2;
		}

		break;

	case title4:
		if (keyinput.down >= 10)
		{
			setup();
			flag = title1;
		}

		if (keyinput.up >= 10)
		{
			setup();
			flag = title2;
		}

		if (keyinput.space)
		{
			flag = rule;
		}

		break;

	case rule:
		if (keyinput.x)
		{
			flag = title4;
		}
		break;

	case gameplay1:

		player.time = GetNowCount();

		move_player();
		move_ball();
		move_mom();

		judge_player_to_ball();
		judge_ball_to_player();
		judge_mom_to_player();

		if (player.score == player.ball_num * 10)
		{
			PlaySound("bgm/PerituneMaterial_Market_loop.ogg", DX_PLAYTYPE_LOOP); 
			flag = perfect;
		}

		if (player.life == 10)
		{
			PlaySound("bgm/PerituneMaterial_Chinatown_Healing_loop.ogg", DX_PLAYTYPE_LOOP);
			flag = score_mom;
		}

		if (player.life == 0)
		{
			PlaySound("bgm/PerituneMaterial_Chinatown_Healing_loop.ogg", DX_PLAYTYPE_LOOP);
			flag = score_ball;
		}

		if (GetNowCount() - player.initime > TIME)
		{
			PlaySound("bgm/PerituneMaterial_Chinatown_Healing_loop.ogg", DX_PLAYTYPE_LOOP);
			flag = score_time;
		}

		break;

	case gameplay2:

		player.time = GetNowCount();

		move_player();
		move_ball();
		move_mom();

		judge_player_to_ball();
		judge_ball_to_player();
		judge_mom_to_player();

		if (player.score == player.ball_num * 10)
		{
			PlaySound("bgm/PerituneMaterial_Market_loop.ogg", DX_PLAYTYPE_LOOP);
			flag = perfect;
		}

		if (player.life == 10)
		{
			PlaySound("bgm/PerituneMaterial_Chinatown_Healing_loop.ogg", DX_PLAYTYPE_LOOP);
			flag = score_mom;
		}

		if (player.life == 0)
		{
			PlaySound("bgm/PerituneMaterial_Chinatown_Healing_loop.ogg", DX_PLAYTYPE_LOOP);
			flag = score_ball;
		}

		if (GetNowCount() - player.initime > TIME)
		{
			PlaySound("bgm/PerituneMaterial_Chinatown_Healing_loop.ogg", DX_PLAYTYPE_LOOP);
			flag = score_time;
		}

		break;

	case score_mom:

		if (keyinput.z)
		{
			initialize();
			setup();
			PlaySound("bgm/PerituneMaterial_Chinatown_loop.ogg", DX_PLAYTYPE_LOOP);
			if (player.ball_num == BALL / 2)
			{
				flag = gameplay1;
			}

			if (player.ball_num == BALL)
			{
				flag = gameplay2;
			}
		}

		if (keyinput.x) {
			if (player.ball_num == BALL / 2)
			{
				setup();
				PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP);
				flag = title1;
			}

			if (player.ball_num == BALL)
			{
				setup();
				PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP);
				flag = title2;
			}
		}

		break;

	case score_ball:

		if (keyinput.z)
		{
			initialize();
			setup();
			PlaySound("bgm/PerituneMaterial_Chinatown_loop.ogg", DX_PLAYTYPE_LOOP);
			if (player.ball_num == BALL / 2)
			{
				flag = gameplay1;
			}

			if (player.ball_num == BALL)
			{
				flag = gameplay2;
			}
		}

		if (keyinput.x) {

			if (player.ball_num == BALL / 2)
			{
				setup();
				PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP);
				flag = title1;
			}

			if (player.ball_num == BALL)
			{
				setup();
				PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP);
				flag = title2;
			}
		}

		break;

	case score_time:

		if (keyinput.z)
		{
			initialize();
			setup();
			PlaySound("bgm/PerituneMaterial_Chinatown_loop.ogg", DX_PLAYTYPE_LOOP);
			if (player.ball_num == BALL / 2)
			{
				flag = gameplay1;
			}

			if (player.ball_num == BALL)
			{
				flag = gameplay2;
			}
		}

		if (keyinput.x) {

			if (player.ball_num == BALL / 2)
			{
				setup();
				PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP);
				flag = title1;
			}

			if (player.ball_num == BALL)
			{
				setup();
				PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP);
				flag = title2;
			}
		}

		break;

	case perfect:

		if (keyinput.z)
		{
			initialize();
			setup();
			PlaySound("bgm/PerituneMaterial_Chinatown_loop.ogg", DX_PLAYTYPE_LOOP);
			if (player.ball_num == BALL / 2)
			{
				flag = gameplay1;
			}

			if (player.ball_num == BALL)
			{
				flag = gameplay2;
			}

		}

		if (keyinput.x) {

			if (player.ball_num == BALL / 2)
			{
				setup();
				PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP);
				flag = title1;
			}

			if (player.ball_num == BALL)
			{
				setup();
				PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP);
				flag = title2;
			}
		}
		break;

	}
}
