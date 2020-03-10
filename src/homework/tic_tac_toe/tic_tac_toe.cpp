//cpp
#include "tic_tac_toe.h"



bool TicTacToe::game_over()
{
	return true;
}

void TicTacToe::start_game(string first_player)
{
	if (!(first_player == "O" || first_player == "X"))

	{

		throw Invalid("Player must be X or O.");


	}
	else 
	{
		next_player = first_player;
	}
	
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)

	{

		throw Invalid("\nPosition must be 1 to 9.");

	}

	if (next_player == "")

	{

		throw Invalid("\nMust start game first.");

	}

	set_next_player();
}

string TicTacToe::get_player() const
{
	return next_player;
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}
