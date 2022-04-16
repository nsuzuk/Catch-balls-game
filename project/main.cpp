#include"DxLib.h"
#include<math.h>
#include"define.h"
#include"global.h"
#include"function.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){

	ChangeWindowMode(TRUE);
	SetGraphMode(WIDTH, HEIGHT, 32);
	
	SetMainWindowText("Catch Balls"); //Window､ﾎ･ｿ･､･ﾈ･・・

	if (DxLib_Init() != 0) return 0;
	SetDrawScreen(DX_SCREEN_BACK);
	load();
	setup();
	SetFontSize(28);
	ChangeFontType(DX_FONTTYPE_ANTIALIASING);
	
	PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP); //ｳﾚbgm
	flag = title1; //ｳﾚ･ﾕ･鬣ｰ

	////////////////////////･ｲｩ`･爭・`･ﾗ/////////////////////////
	while (ProcessMessage() == 0){	
		if (key[KEY_INPUT_ESCAPE]) break; //Escapeﾑｺ､ｵ､・ｿ､餮indow､ﾎｽKﾁﾋ
		update();
		draw();
	}
	////////////////////////･ｲｩ`･爭・`･ﾗ/////////////////////////

	DxLib_End();
	return 0;
}