#include "Game.h"
#include "MoveFunctions.h"
#include <iostream>
#include <string>
using namespace std;
void Game::initializeBoard(char (*board)[8])
{

	int N =0, L =0;

	for(N=0;N<=7;N++)
	{
		for(L=0;L<=7;L++)
		{
			board[N][L] = '0';
			if(N==1){
				board[N][L] = 'P';
			}

			if(N==6){
				board[N][L] = 'p';
			}
		}
	}

	// white pieces
	board[0][0] = 'R';
	board[0][1] = 'N';
	board[0][2] = 'B';
	board[0][3] = 'Q';
	board[0][4] = 'K';
	board[0][7] = 'R';
	board[0][6] = 'N';
	board[0][5] = 'B';

	//black pieces
	board[7][0] = 'r';
	board[7][1] = 'n';
	board[7][2] = 'b';
	board[7][3] = 'q';
	board[7][4] = 'k';
	board[7][7] = 'r';
	board[7][6] = 'n';
	board[7][5] = 'b';
	
}

void Game::showBoard(char (*board)[8]){

	int indexY =7;
	int indexX = 0;

	for(indexY=7;indexY>=0;indexY--){

		for(indexX=0;indexX<=7;indexX++){
			if(board[indexY][indexX]=='0'){
				cout<<"   "<<".";
			}
			else{
				cout<<"   "<<board[indexY][indexX];
			}
			
		}
		cout << endl<<endl;
	}
		
}

bool Game::getMove(char board[][8], int player){ // if a valid move return true else return false;
	
	string command;
	getline(cin,command);



	Functions::Move( command, player, board );
	return true;
}