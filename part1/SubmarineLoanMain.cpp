/* Mary Connolly and Ryan Busk
 * Lab 3 Part 1
 * Driver program to demonstrate the derived class Submarine Loan
 * Executable will be called loanmain
 */


#include <iostream>
#include <string>
#include "BankAccount.h"
#include "SubmarineLoan.h"
using namespace std;

int main()
{
	SubmarineLoan mySub("Mary", "0005", .05, 10000, 500, 1, 3000); //instantiate submarine loan

	mySub.mutinizeMary(); //isMaryCaptain set to 0

	mySub.credit(200); //subtract $200 from balance

	mySub.makeAllPayments(); //make the rest of the monthly payments and display table for user

	return 0;
}
