/* Ryan Busk and Mary Connolly
 * Lab 3
 *
 * Implementation file for SavingsforSailing
 */

SavingsForSailing::SavingsForSailing(const string &name, const string &accNum, double rate, double balance, string i, double g)
	: BankAccount(name, accNum, rate, balance)
{
	item = i;
	goal = g;
}

//deposit money in account
void SavingsForSailing::deposit(double amount)
{
	balance += amount;
}

//prints whether or not balance has reached goal
void SavingsForSailing::checkIfReachedGoal()
{
	if (balance >=goal)
	{
		cout << "You've reached your goal! You can now buy your " <<item << "." << endl;
	}

	if (balance < goal)
	{
		cout << "You haven't reached your goal. No " << item << " for you." << endl;
	}
}
