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
	cout<<"This says some other thing, so it'll conflict. I think. " << mathyness(12.22, 15.0);
	Sleep(1000.0);
	return 0;
}

