/* Main function for part 3
 * Mary Connolly and Ryan Busk
*/

#include <iostream>
#include "BankAccount.h"
#include "SavingsForSailing.h"
#include <string>

int main()
{
	const string name="Mary"; // declare name on Account
	const string accNum = "54321"; // account number
	double rate = .4; // rate on account
	double balance = 4000; // balance on account
	const string item = "Boat"; // what you want to buy
	double goal = 10000; // how much that thing costs

	SavingsForSailing saving(name,accNum,rate,balance,item,goal); // instantiate clacc

	saving.checkIfReachedGoal(); // check if goal is reached
}

