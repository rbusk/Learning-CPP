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
#include "BankAccount"
using namespace std;

class SubmarineLoan : public BankAccount {

	public:
		SubMarineLoan(const string &, const string, double, double, int, int, double);
		void mutinizeMary();
		void makePayment();
		void credit(int); //subtract money from balance
		void makeAllPayments(); //display payments and set balance to 0

	private:
		int numTorps; //number of torpedos
		int isMaryCaptain;
		double payment;
};

#endif SUBMARINELOAN_H
