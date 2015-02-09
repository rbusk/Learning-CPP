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
		SubmarineLoan(const string &, const string &, double, double, int, int, double);
		void mutinizeMary();
		void credit(int); //subtract money from balance
		void makeAllPayments(); //make and display all payments

	private:
		int numTorps; //number of torpedos
		int isMaryCaptain;
		double payment;
};

#endif
