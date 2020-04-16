// NimCefExample.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	Sleep(9000);
	MessageBox(NULL, _T("退出了"), _T("你好！"), MB_OK);
    return 0;
}

