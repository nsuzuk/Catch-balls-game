#include"struct.h"
#include"DxLib.h"

struct S_player player;						
struct S_ball ball[BALL];					
struct S_mom mom;						
struct S_image imglist;							
struct S_keyinput keyinput;						
enum e_flag flag;							
char key[256];									
int black = GetColor(0, 0, 0);				
int white = GetColor(255, 255, 255);
int map[WIDTH][HEIGHT];
