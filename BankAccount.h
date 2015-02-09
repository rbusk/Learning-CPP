/* Mary Connolly and Ryan Busk
 * interface file for BankAccount, a base class
 */

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class BankAccount {

	public:
		BankAccount(string, string, double, double);
		double calculateInterest(); //returns monthly interest
		double getBalance(); //returns balance

	private:

		string name; //owner's name
		string accNum; //account number
		double rate; //interest rate
		double balance;
};
#endif
