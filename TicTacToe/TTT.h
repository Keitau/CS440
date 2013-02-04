#pragma once
#include "Player.h"
#include <iostream>

class TicTacToe{
public:
	TicTacToe();

	void render();
	RET_CODE tick(char* input);

	int getPlayerTurn(){return playerTurn;}
	String getCurrentPlayerName();
	bool isWon(DIRECTION dir);
	
	// Code for the return of the input
	enum RET_CODE{
		CONTINUE,
		PLAYER_WIN,
		INVALID_CHOICE
	};
	
	// Direction of searching board for player win
	enum DIRECTION{
		HORIZONTAL,
		VERTICAL,
		R_DIAG,
		L_DIAG
	};

private:

	//recursive function used to find if player has 3 marks in a row
	int isWon(int currPosition, DIRECTION dir);
	
	int* gameBoard;
	Player** players;
	int playerTurn;
};
