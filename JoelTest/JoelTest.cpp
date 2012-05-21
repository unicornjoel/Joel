// JoelTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>

using namespace std;


int mathyness(float things, float otherthings)
{
	return (things * otherthings * 1000);
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"Yep, Now the message is different. No, I have no idea why that N was capitalized. Also : " << mathyness(12.22, 15.0);
	Sleep(1000.0);
	return 0;
}

