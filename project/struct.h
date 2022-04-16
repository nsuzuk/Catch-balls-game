struct S_player
{
	double x, y;
	double vx, vy;
	int life;
	int score;
	int attack;
	int attack_size_x;
	int attack_size_y;
	int size_x;
	int size_y;
	int initime;
	int time;

	int ball_num;
};


struct S_ball
{
	double x, y;
	double vx, vy;
	int life;
	int size_x;
	int size_y;	
};



struct S_mom
{
	double x, y;
	double vx, vy;
	int size_x;
	int size_y;
	int move; 
};

struct S_image
{
	int img_player2;
	int img_player2_1;
	int img_player2_2;
	int img_player1;
	int img_player1_1;
	int img_player1_2;
	int img_player3;
	int img_player3_1;
	int img_player3_2;
	int img_player4;
	int img_player4_1;
	int img_player4_2;

	int img_attack1_1;
	int img_attack1_2;
	int img_attack1_3;
	int img_attack1_4;
	int img_attack1_5;
	int img_attack1_6;
	int img_attack2_1;
	int img_attack2_2;
	int img_attack2_3;
	int img_attack2_4;
	int img_attack2_5;
	int img_attack2_6;
	int img_attack3_1;
	int img_attack3_2;
	int img_attack3_3;
	int img_attack3_4;
	int img_attack3_5;
	int img_attack3_6;
	int img_attack4_1;
	int img_attack4_2;
	int img_attack4_3;
	int img_attack4_4;
	int img_attack4_5;
	int img_attack4_6;

	int img_mom2;
	int img_mom2_1;
	int img_mom2_2;
	int img_mom1;
	int img_mom1_1;
	int img_mom1_2;
	int img_mom3;
	int img_mom3_1;
	int img_mom3_2;
	int img_mom4;
	int img_mom4_1;
	int img_mom4_2;

	int img_ball;
	int img_title1;
	int img_title2;
	int img_title4;
	int img_rule;
	int img_floor;

	int img_score_mom;
	int img_score_ball;
	int img_score_time;
	int img_perfect;
};

struct S_keyinput {
	int up;
	int down;
	int left;
	int right;
	int space;
	int z;
	int x;

};

enum e_flag
{
	title1,
	title2,
	title4,
	rule,
	gameplay1,
	gameplay2,
	score_mom,
	score_ball,
	score_time,
	perfect,

};
