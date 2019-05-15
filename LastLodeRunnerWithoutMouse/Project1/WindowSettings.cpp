#include "WindowSettings.h"

using namespace std;

void ShowConsole()
{
	system("title LODE RUNNER");
	system("color F0"); //F0
	int screen_width = 1920;//GetSystemMetrics(SM_CXSCREEN); // получение разрешения экрана
	int screen_height = 1050;//GetSystemMetrics(SM_CYSCREEN);
	MoveWindow(GetConsoleWindow(), 0, 0, screen_width, screen_height, true);
	ShowCursor(false);
}