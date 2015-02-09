/* Mary Connolly and Ryan Busk
 * interface for class OvernightPackage, a derived class
 */ 

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

class OvernightPackage : public Package
{
	public:
		OvernightPackage(const string &n, const string &add, int zipCode, double w, double cPO, double);
		double calculateCost();

	private:
		double extraCostPerOunce;
};

#endif
