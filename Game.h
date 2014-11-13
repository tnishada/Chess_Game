#pragma once
class Game
{
public:
	static void initializeBoard(char (*board)[8]);
	static void showBoard(char (*board)[8]);
	static bool getMove(char [][8], int player);
};

