/* Main function for part 3
 * Mary Connolly and Ryan Busk
*/

#include <iostream>
#include "BankAccount.h"
#include "SavingsForSailing.h"
#include <string>

int main()
{
	const string name="Mary";
	const string accNum = "54321";
	double rate = .4;
	double balance = 4000;
	const string item = "Boat";
	double goal = 10000;

	SavingsForSailing saving(name,accNum,rate,balance,item,goal);

	saving.checkIfReachedGoal();
}

