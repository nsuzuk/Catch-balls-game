#include"Dxlib.h"
#include"extern.h"
#include"function.h"
void keystate() {

	GetHitKeyStateAll(key);

	if (key[KEY_INPUT_SPACE]||(GetJoypadInputState(DX_INPUT_PAD1)&PAD_INPUT_2))keyinput.space++;
	else keyinput.space = 0;

	if (key[KEY_INPUT_Z] || (GetJoypadInputState(DX_INPUT_PAD1)&PAD_INPUT_4)) keyinput.z++;
	else keyinput.z = 0;

	if (key[KEY_INPUT_X] || (GetJoypadInputState(DX_INPUT_PAD1)&PAD_INPUT_1)) keyinput.x++;
	else keyinput.x = 0;

	//•≠©`•—•√•…§Œ»ÅE¶§À§Ë§ÅEÆ◊÷•≠©`§Œ≤Ÿ◊˜°£
	if (key[KEY_INPUT_UP] == 0) {
		if (GetJoypadInputState(DX_INPUT_PAD1) & 8)key[KEY_INPUT_UP] = 1;
		else key[KEY_INPUT_UP] = 0;
	}
	
	if (key[KEY_INPUT_DOWN] == 0) {
		if (GetJoypadInputState(DX_INPUT_PAD1) & 1)key[KEY_INPUT_DOWN] = 1;
		else key[KEY_INPUT_DOWN] = 0;
	}

	if (key[KEY_INPUT_LEFT] == 0) {
		if (GetJoypadInputState(DX_INPUT_PAD1) & 2)key[KEY_INPUT_LEFT] = 1;
		else key[KEY_INPUT_LEFT] = 0;
	}

	if (key[KEY_INPUT_RIGHT] == 0) {
		if (GetJoypadInputState(DX_INPUT_PAD1) & 4)key[KEY_INPUT_RIGHT] = 1;
		else key[KEY_INPUT_RIGHT] = 0;
	}

	// Æ◊÷•≠©`§Œ≤Ÿ◊˜°£
	if ((key[KEY_INPUT_UP] && key[KEY_INPUT_RIGHT])) {
		keyinput.up++;
		keyinput.down = 0;
		keyinput.left = 0;
		keyinput.right++;
	}

	else if ((key[KEY_INPUT_UP] && key[KEY_INPUT_LEFT])) {
		keyinput.up++;
		keyinput.down = 0;
		keyinput.left++;
		keyinput.right = 0;
	}

	else if ((key[KEY_INPUT_DOWN] && key[KEY_INPUT_RIGHT])) {
		keyinput.up = 0;
		keyinput.down++;
		keyinput.left = 0;
		keyinput.right++;
	}

	else if ((key[KEY_INPUT_DOWN] && key[KEY_INPUT_LEFT])) {
		keyinput.up = 0;
		keyinput.down++;
		keyinput.left++;
		keyinput.right = 0;
	}

	else if (key[KEY_INPUT_UP]) {
		keyinput.up++;
		keyinput.down = 0;
		keyinput.left = 0;
		keyinput.right = 0;
	}
	else if (key[KEY_INPUT_DOWN]) {
		keyinput.down++;
		keyinput.up = 0;
		keyinput.left = 0;
		keyinput.right = 0;
	}
	else if (key[KEY_INPUT_LEFT]) {
		keyinput.left++;
		keyinput.down = 0;
		keyinput.up = 0;
		keyinput.right = 0;
	}
	else if (key[KEY_INPUT_RIGHT]) {
		keyinput.right++;
		keyinput.down = 0;
		keyinput.up = 0;
		keyinput.left = 0;
	}


}