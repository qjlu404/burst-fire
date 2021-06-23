#include <windows.h>
#include <iostream>
#include <time.h>
void burst()
{
	clock_t startTime = clock();
	while ((double(clock() - startTime) / (double)CLOCKS_PER_SEC) < 0.250)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, NULL, NULL, NULL, NULL);
	}
	
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP, NULL, NULL, NULL, NULL);
}
int main()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_LBUTTON) < 0)
		{
			burst();
		}
	}
}