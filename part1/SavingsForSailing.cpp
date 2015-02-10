/* Ryan Busk and Mary Connolly
 * Lab 3
 *
 * Implementation file for SavingsforSailing, a derived class which is a savings account to help save for a specific item
 */
 
#include <iostream>
#include <iomanip>
#include <string>
#include "BankAccount.h"
#include "SavingsForSailing.h"
using namespace std;

//nondefault constructor which calls the BankAccount constructor
SavingsForSailing::SavingsForSailing(const string &name, const string &accNum, double rate, double balance, const string &i, double g)
	: BankAccount(name, accNum, rate, balance)
{
	item = i;
	goal = g;
}

//deposit money in account
void SavingsForSailing::deposit(double amount)
{
	setBalance(getBalance()+amount); //add amount to balance

	//print information about deposit for user
	cout << "Ye deposited $" <<fixed << setprecision(2) << amount << " and yer account balance is now: $" << fixed << setprecision(2) << getBalance() << "." <<endl << endl;
}

//prints whether or not balance has reached goal
void SavingsForSailing::checkIfReachedGoal()
{
	//if balance is greater than goal
	if (getBalance() >=goal)
	{
		cout << "Ye've reached your goal of $" << fixed << setprecision(2) << goal <<"! Ye can now buy yer " <<item << "." << endl << endl;
	}

	//if balance is less than goal
	if (getBalance() < goal)
	{
		cout << "Ye haven't reached your goal of $" << fixed << setprecision(2) << goal << ". No " << item << " for ye." << endl << endl;
	}
}
