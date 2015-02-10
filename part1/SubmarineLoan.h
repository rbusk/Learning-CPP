/* Mary Connolly and Ryan Busk
 * Lab 3
 *
 * Interface for derived class SubmarineLoan
 *
 */

#ifndef SUBMARINELOAN_H
#define SUBMARINELOAN_H

#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

class SubmarineLoan : public BankAccount {

	public:
		SubmarineLoan(const string &, const string &, double, double, int, int, double); //nondefault constructor
		void mutinizeMary(); //isMaryCaptain set to 0
		void credit(int); //subtract money from balance
		void makeAllPayments(); //make and display all payments

	private:
		int numTorps; //number of torpedos
		int isMaryCaptain; //1 if Mary is captain, 0 otherwise
		double payment; //monthly payment
};

#endif
