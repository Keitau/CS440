#include "TTT.h"

TicTacToe::TicTacToe()
{
	gameBoard=new int[9];
	players = new Player[2];
	players[0]=new Player("Player 1");
	players[1]=new Player("Player 2");
	playerTurn = 0;
}

bool TicTacToe::tick(int* input)
{
	if(input.size() > 1)
	{
		int index = input[0] + 3 * input[1]; // index is column + length * row

		if(index > 8)
			return false;

		gameBoard[index] = playerTurn;

		if(playerTurn)
			playerTurn = 0;
		else
			playerTurn = 1;
		return true;
	}
	else
		return false;
}

void TicTacToe::render()
{
	for(int row = 0; row < 3; row++)
	{
		std::cout << "~~~ ~~~ ~~~/n";

		for(int col = 0; col < 3; col++)
		{
			std::cout<<"|" + gameBoard[col + 3*row] + "|/n";
		}
	}

	std::cout << "~~~ ~~~ ~~~/n";
}

String TicTacToe::getCurrentPlayerName()
{
	if(playerTurn)
		return players[1]->name;
	else
		return players[0]->name;
}
