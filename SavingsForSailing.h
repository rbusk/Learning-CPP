/* Ryan Busk and Mary Connolly
 * Lab3
 *
 * Interface for SavingsForSailing derived class
 * class is a savings account
 */

#include <iostream>
using namespace std;

class SavingsForSailing : public BankAccount {

	public:
		SavingsForSailing();
		void deposit(double); //deposit money to savings account
		void checkIfReachedGoal(); //prints whether or not balance has reached goal


	private:
		string item; //item money is being saved for
		double goal; //amount of money needed to buy item
}
