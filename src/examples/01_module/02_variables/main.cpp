#include "vars.h"
#include<string>

using std::string;

int main() 
{
	string name = "john";
	display_number(10);
	display_number(20);

	int num = 4;

	cout << square_number(num) << "\n";

	cout << num;

	int num1 = square_number(4);
	
	return 0;
}