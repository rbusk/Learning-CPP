/* Ryan Busk and Mary Connolly
 * Lab 3
 *
 * Implentation file for SubmarineLoan class
 */

#include <iostream>
#include <string>
#include "BankAccount.h"
#include "SubmarineLoan.h"

//nondefault constructor
SubmarineLoan::SubmarineLoan(const string &n, const string &aN, double r, double b, int nT, int isMC, double pay)
	: BankAccount(n, aN, r, b)
{
	numTorps = nT;
	isMaryCaptain = isMC;
	payment = pay;
}

void SubmarineLoan::mutinizeMary()
{
	isMaryCaptain = 0;
}

//subtract payment from balance
void SubmarineLoan::makePayment()
{
	setBalance(getBalance()-payment);
}

//credit balance with input
void SubmarineLoan::credit(int amount)
{
	setBalance(getBalance()-amount);
}
