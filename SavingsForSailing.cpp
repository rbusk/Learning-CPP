/* Ryan Busk and Mary Connolly
 * Lab 3
 *
 * Implementation file for SavingsforSailing
 */
 
#include <iostream>
#include <iomanip>
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
	setBalance(getBalance()+amount); //add amount to balance

	cout << "Ye deposited $" <<fixed << setprecision(2) << amount << " and yer account balance is now: $" << fixed << setprecision(2) << getBalance() << "." <<endl << endl;
}

//prints whether or not balance has reached goal
void SavingsForSailing::checkIfReachedGoal()
{
	if (getBalance() >=goal)
	{
		cout << "Ye've reached your goal of $" << fixed << setprecision(2) << goal <<"! Ye can now buy yer " <<item << "." << endl << endl;
	}

	if (getBalance() < goal)
	{
		cout << "Ye haven't reached your goal of $" << fixed << setprecision(2) << goal << ". No " << item << " for ye." << endl << endl;
	}
}
