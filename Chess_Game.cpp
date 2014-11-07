// Chess_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Chess_Dll.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char Board[8][8];

	Board[5][3] = 'K';

	Functions::isChecked(Board, 'K');

	return 0;
}

