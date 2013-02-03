#pragma once
#include "Player.h"
#include <iostream>

class TicTacToe{
public:
	TicTacToe();

	void render();
	bool tick(int* input);

	int getPlayerTurn(){return playerTurn;}
	String getCurrentPlayerName();

private:
	int* gameBoard;
	Player** players;
	int playerTurn;
};