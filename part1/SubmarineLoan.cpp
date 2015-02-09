/* Ryan Busk and Mary Connolly
 * Lab 3
 *
 * Implentation file for SubmarineLoan class
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "BankAccount.h"
#include "SubmarineLoan.h"
using namespace std;

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

	cout << "Mary is no longer captain of this here ship." << endl << endl;
}

//credit balance with input
void SubmarineLoan::credit(int amount)
{
	setBalance(getBalance()-amount);

	cout << "Yer account has been credited with $" << fixed << setprecision(2) << amount << ". Yer current balance is: $" << getBalance() << endl << endl;
}

//print payment schedule for loan
void SubmarineLoan::makeAllPayments()
{
	int month = 0;

	cout << "Payment schedule fer yer submarine: " << endl << endl;

	cout << "Month     Payment       Interest       Balance" << endl;

	while ((getBalance() - payment + calculateInterest()) > 0)
	{
		month+=1; //increment month

		setBalance(getBalance() - payment + calculateInterest());

		cout <<setfill(' ') << setw(3) << month << "     $" << setfill(' ') << setw(8) << fixed << setprecision(2) << payment << "     $" << setfill(' ') << setw(8) << calculateInterest() << "     $" << setfill(' ') << setw(10) << getBalance() << endl;
	}

	month+=1;

	double fp; //finalpayment

	fp = getBalance() + calculateInterest();

	setBalance(0); //final balance is 0.00

		cout <<setfill(' ') << setw(3) << month << "     $" << setfill(' ') << setw(8) << fixed << setprecision(2) << fp << "     $" << setfill(' ') << setw(8) << calculateInterest() << "     $" << setfill(' ') << setw(10) << getBalance() << endl << endl;

}
