#include <windows.h>
#include <fstream>
#include <iostream>
#include <time.h>
std::fstream hfile;
int ms, ms1, ch = 0;
void burst()
{
	clock_t startTime = clock();
	while (clock() - startTime < ms)
	{
		if (ch == 1)
			mouse_event(MOUSEEVENTF_LEFTDOWN, NULL, NULL, NULL, NULL);
		if (ch == 0)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, NULL, NULL, NULL, NULL);
			Sleep(10);
			mouse_event(MOUSEEVENTF_LEFTUP, NULL, NULL, NULL, NULL);
			Sleep(ms1);
		}
		Sleep(ms1);
	}
	Sleep(10);
	if(ch == 1)
		mouse_event(MOUSEEVENTF_LEFTUP, NULL, NULL, NULL, NULL);
}
int main()
{
	hfile = std::fstream("test.txt", std::ios::in | std::ios::out);
	if (hfile.is_open())
	{
		hfile >> ms;
		hfile >> ms1;
		hfile >> ch;
		hfile.close();

	}
	while (true)
	{
		if (GetAsyncKeyState(VK_LBUTTON) < 0)
		{
			burst();
			hfile = std::fstream("test.txt", std::ios::in | std::ios::out);
			if (hfile.is_open())
			{
				hfile >> ms;
				hfile >> ms1;
				hfile >> ch;
				hfile.close();

			}
		}
	}
}