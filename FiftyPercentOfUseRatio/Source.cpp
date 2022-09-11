/*
problem description:
I want to make CPU's use ratio is 50%

*/

#include<stdio.h>
#include<windows.h>

DWORD busyTime = 10;
DWORD idleTime = busyTime;

int main()
{
	DWORD startTime = GetTickCount();
	while (true)
	{
		while ((GetTickCount() - startTime) < busyTime)
		{
			int i = 0;
		}
		Sleep(idleTime);
	}

	return 0;
}