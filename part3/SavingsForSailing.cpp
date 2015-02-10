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
{
	item = i;
	goal = g;
	bankAccount.setVariables(name, accNum, rate, balance);
}

//deposit money in account
void SavingsForSailing::deposit(double amount)
{
	bankAccount.setBalance(bankAccount.getBalance()+amount); //add amount to balance

	cout << "Ye deposited $" <<fixed << setprecision(2) << amount << " and yer account balance is now: $" << fixed << setprecision(2) << bankAccount.getBalance() << "." <<endl << endl;
}

//prints whether or not balance has reached goal
void SavingsForSailing::checkIfReachedGoal()
{
	if (bankAccount.getBalance() >=goal)
	{
		cout << "Ye've reached your goal of $" << fixed << setprecision(2) << goal <<"! Ye can now buy yer " <<item << "." << endl << endl;
	}

	if (bankAccount.getBalance() < goal)
	{
		cout << "Ye haven't reached your goal of $" << fixed << setprecision(2) << goal << ". No " << item << " for ye." << endl << endl;
	}
}
