#include"DxLib.h"
#include<math.h>
#include"define.h"
#include"global.h"
#include"function.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){

	ChangeWindowMode(TRUE);
	SetGraphMode(WIDTH, HEIGHT, 32);
	
	SetMainWindowText("Catch Balls"); //Window�Υ����ȥ�E�E

	if (DxLib_Init() != 0) return 0;
	SetDrawScreen(DX_SCREEN_BACK);
	load();
	setup();
	SetFontSize(28);
	ChangeFontType(DX_FONTTYPE_ANTIALIASING);
	
	PlaySound("bgm/PerituneMaterial_Folk_Chinese_loop.ogg", DX_PLAYTYPE_LOOP); //����bgm
	flag = title1; //���ڥե饰

	////////////////////////���`�ुE`��/////////////////////////
	while (ProcessMessage() == 0){	
		if (key[KEY_INPUT_ESCAPE]) break; //EscapeѺ����E���Window�νK��
		update();
		draw();
	}
	////////////////////////���`�ुE`��/////////////////////////

	DxLib_End();
	return 0;
}