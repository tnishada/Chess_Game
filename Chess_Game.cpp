// Chess_Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MoveFunctions.h"
#include "Game.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char Board[8][8]; // capital letters => white pieces

	Game::initializeBoard(Board);
	Game::showBoard(Board);
	
	//cout<<Functions::isPathClear(Board,0,0,5,5)<<endl;

	bool returnvalue = true;
	int player = 0; // 1=> white 0 => black

	while(returnvalue){
		player++;
		//cout<<"player : "<<player<<endl;
		player = (player)%2;
		returnvalue = Game::getMove(Board,player);
		
		Game::showBoard(Board);
	}

	return 0;
}

