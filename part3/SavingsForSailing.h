/* Ryan Busk and Mary Connolly
 * Lab3
 *
 * Interface for SavingsForSailing derived class
 * class is a savings account
 */

#ifndef SAVINGSFORSAILING_H
#define SAVINGSFORSAILING_H

#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

class SavingsForSailing
{

	public:
		SavingsForSailing(const string &, const string &, double, double, const string &, double);
		void deposit(double); //deposit money to savings account
		void checkIfReachedGoal(); //prints whether or not balance has reached goal


	private:
		string item; //item money is being saved for
		BankAccount bankAccount;
		double goal; //amount of money needed to buy item
};

#endif
