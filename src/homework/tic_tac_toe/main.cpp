#include"tic_tac_toe.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main() 
{
	char cont = 'y';
	TicTacToe game;
	string first_player;
	int position;

	do
	{
		cout << "Enter X or O: ";
		cin >> first_player;

		game.start_game(first_player);

		while (game.game_over() == false)
		{
			cout << "Enter position from 1 to 9: ";
			cin >> position;
			game.mark_board(position);
		}

		cout << "Game Over: ";

		cout << "Play again y";
		cin >> cont;
	} while (cont == 'y' || cont == 'Y');

	return 0;
}