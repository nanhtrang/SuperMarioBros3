#include <windows.h>
#include "mario.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	CMarioSample g(hInstance, L"Mario Sample - A larger world", GAME_SCREEN_RESOLUTION_640_480_24, 0, 60);

	g.Init();
	g.Run();

	return 0;
}


