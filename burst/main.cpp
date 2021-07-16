#include <windows.h>
#include <fstream>
#include <iostream>
#include <time.h>
std::fstream hfile;
int ms, ms1 = 0;
void burst()
{
	clock_t startTime = clock();
	while (clock() - startTime < ms)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN, NULL, NULL, NULL, NULL);
		Sleep(50);
	}
	
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP, NULL, NULL, NULL, NULL);
}
int main()
{
	
	while (true)
	{
		if (GetAsyncKeyState(0x43) < 0)
		{
			hfile = std::fstream("test.txt", std::ios::in | std::ios::out);
			if (hfile.is_open())
			{
				hfile >> ms;
				hfile >> ms1;
				hfile.close();

			}
			burst();
		}
	}
}