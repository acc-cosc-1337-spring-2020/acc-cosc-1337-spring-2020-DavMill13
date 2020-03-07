#include<string>
#include<vector>
//h

using std::string; using std::vector;

class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const;

private:
	void set_next_player();
	string next_player;
};

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error()const { return message; }
private:
	std::string message;
};
