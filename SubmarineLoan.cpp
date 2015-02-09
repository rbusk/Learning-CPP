/* Ryan Busk and Mary Connolly
 * Lab 3
 *
 * Implentation file for SubmarineLoan class
 */

#include <iostream>
#include "SubmarineLoan.h"

//nondefault constructor
SubmarineLoan::SubmarineLoan(const string &name, const string &accNum, double rate, double balance, int nT, int isMC, double pay)
	: BankAccount(name, accNum, rate, balance)
{
	numTorps = nT;
	isMaryCaptain = isMC;
	pay = payment;
}

void mutinizeMary()
{
	isMaryCaptain = 0;
}

//subtract payment from balance
void makePayment()
{
	balance -= payment;
}

//credit balance with input
void credit(int amount)
{
	balance -= amount;
}
