// Chess_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Chess_Dll.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char Board[8][8];

	Functions::Move(Board,0,0,5,5);

	cout<<Board[0][0];

	return 0;
}

