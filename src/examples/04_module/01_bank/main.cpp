#include "bank_account.h"
#include<iostream>

using std::cout;
using std::cin;


int main()
{
	auto num{ 0 };
	auto num1{ 1.5 };
	auto c{ 'c' };
	auto flag{ true };


	BankAccount account(500);
	auto balance = account.get_balance();
	cout << "balance is: " << balance;

	auto amount{ 0 };
	cout << "\nEnter deposit amount: \n";
	cin >> amount;


	account.deposit(amount);
	cout << "Balance is: " << account.get_balance();


	
	return 0;
}