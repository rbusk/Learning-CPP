/* Ryan Busk and Mary Connolly
 * Lab 3
 *
 * Implemntation file for the BankAccount Class
 */

#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

//nondefault constructor
BankAccount::BankAccount (const string &n, const string &a, double ir, double b)
{
	name = n;
	accNum = a;
	rate = ir;
	balance = b;
}

BankAccount::BankAccount()
{
	name = "0";
	accNum = "0";
	rate = 0;
	balance = 0;
}

//return monthly interest
double BankAccount::calculateInterest()
{
	return rate * balance / 12;
}

//return balance
double BankAccount::getBalance()
{
	return balance;
}

void BankAccount::setBalance(double n)
{
	balance = n;
}

void BankAccount::setVariables(const string &n, const string &a, double ir, double b)
{
	name = n;
	accNum = a;
	rate = ir;
	balance = b;
}

