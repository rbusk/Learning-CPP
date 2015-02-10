/* Ryan Busk and Mary Connolly
 * Lab 3
 *
 * Implementation file for SubmarineLoan class
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "BankAccount.h"
#include "SubmarineLoan.h"
using namespace std;

//nondefault constructor which calls BankAccount constructor
SubmarineLoan::SubmarineLoan(const string &n, const string &aN, double r, double b, int nT, int isMC, double pay)
	: BankAccount(n, aN, r, b)
{
	numTorps = nT;
	isMaryCaptain = isMC;
	payment = pay;
}

//remove Mary as captain
void SubmarineLoan::mutinizeMary()
{
	isMaryCaptain = 0;

	cout << "Mary is no longer captain of this here submarine." << endl << endl;
}

//credit balance with input
void SubmarineLoan::credit(int amount)
{
	setBalance(getBalance()-amount); //subtract amount from balance

	//print info for transaction to user
	cout << "Yer account has been credited with $" << fixed << setprecision(2) << amount << ". Yer current balance is: $" << getBalance() << endl << endl;
}

//make payments for loan and print payment schedule
void SubmarineLoan::makeAllPayments()
{
	int month = 0;

	cout << "Payment schedule fer yer submarine: " << endl << endl;

	cout << "Month     Payment       Interest       Balance" << endl;

	//make payments until balance is less than 0
	while ((getBalance() - payment + calculateInterest()) > 0)
	{
		month+=1; //increment month

		//add interest and make payment
		setBalance(getBalance() - payment + calculateInterest());

		//print info for user
		cout <<setfill(' ') << setw(3) << month << "     $" << setfill(' ') << setw(8) << fixed << setprecision(2) << payment << "     $" << setfill(' ') << setw(8) << calculateInterest() << "     $" << setfill(' ') << setw(10) << getBalance() << endl;
	}

	month+=1;

	double fp; //final payment

	//calculate final payment
	fp = getBalance() + calculateInterest();

	setBalance(0); //final balance is 0.00

	//print info for user
	cout <<setfill(' ') << setw(3) << month << "     $" << setfill(' ') << setw(8) << fixed << setprecision(2) << fp << "     $" << setfill(' ') << setw(8) << calculateInterest() << "     $" << setfill(' ') << setw(10) << getBalance() << endl << endl;

}
