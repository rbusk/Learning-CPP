/* Mary Connolly and Ryan Busk
 * Lab3, Part 1
 * Driver program to demonstrate the class SavingsForSailing.
 * Executable will be named savingsmain
 */

#include <iostream>
#include <string>
#include "BankAccount.h"
#include "SavingsForSailing.h"
using namespace std;

int main()
{
	SavingsForSailing mySavings("Mary", "0005", .05, 1000, "anchor", 2000); //instantiate savings account

	mySavings.deposit(100); //deposit $100 to account -- now the account should have $1100

	mySavings.checkIfReachedGoal(); //check to see if user has reached goal -- he shouldn't as goal is $2000

	mySavings.deposit(1000); //deposit $1000 into account -- balance should now be $2100

	mySavings.checkIfReachedGoal(); //check to see if user has reached goal -- he should have

	return 0;
}
