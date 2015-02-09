#include <iostream>
#include <string>
#include "BankAccount.h"
#include "SubmarineLoan.h"
#include "SavingsForSailing.h"
using namespace std;

int main()
{
	SubmarineLoan mySub("Mary", "0005", .05, 10000, 500, 1, 3000);

	mySub.mutinizeMary();

	mySub.credit(200);

	mySub.makeAllPayments();

	SavingsForSailing mySavings("Mary", "0005", .05, 1000, "anchor", 2000);

	mySavings.deposit(100);

	mySavings.checkIfReachedGoal();

	mySavings.deposit(1000);

	mySavings.checkIfReachedGoal();

	return 0;
}
