#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

void tecla();

int main()
{
	
	while(1)
	{
		if(GetKeyState(VK_F1))
		{
			tecla();
		}
			
		Sleep(1);
	}

}

void tecla()
{
	INPUT tc[2] = {0};
	
	tc[0].type = INPUT_KEYBOARD;
	tc[0].ki.wScan = 0x3C;
	tc[0].ki.dwFlags = KEYEVENTF_SCANCODE;
	
	tc[1].type = INPUT_KEYBOARD;
	tc[1].ki.wScan = 0x3C;
	tc[1].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
	
	SendInput(2,tc,sizeof(INPUT));
}
