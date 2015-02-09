#include <iostream>
#include <string>
#include "BankAccount.h"
#include "SubmarineLoan.h"
#include "SavingsForSailing.h"
using namespace std;

int main()
{
	BankAccount myAcc("Mary", "0005", .05, 1000);

	SubmarineLoan mySub("Mary", "0005", .05, 10000, 500, 1, 3000);

	SavingsForSailing mySaving("Mary", "0005", .05, 1000, "anchor", 2000);

	return 0;
}
