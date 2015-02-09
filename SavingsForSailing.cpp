/* Ryan Busk and Mary Connolly
 * Lab 3
 *
 * Implementation file for SavingsforSailing
 */
 
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "SavingsForSailing.h"
using namespace std;

SavingsForSailing::SavingsForSailing(const string &name, const string &accNum, double rate, double balance, const string &i, double g)
	: BankAccount(name, accNum, rate, balance)
{
	item = i;
	goal = g;
}

//deposit money in account
void SavingsForSailing::deposit(double amount)
{
	setBalance(getBalance()+amount);
}

//prints whether or not balance has reached goal
void SavingsForSailing::checkIfReachedGoal()
{
	if (getBalance() >=goal)
	{
		cout << "You've reached your goal! You can now buy your " <<item << "." << endl;
	}

	if (getBalance() < goal)
	{
		cout << "You haven't reached your goal. No " << item << " for you." << endl;
	}
}
