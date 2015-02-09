/* Mary Connolly and Ryan Busk
 * interface foe class TwoDayPackage, a derived class
 */ 

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

class TwoDayPackage : public Package
{
	public:
		TwoDayPackage(const string &n, const string &add, int zipCode, double w, double cPO, double);
		double calculateCost();

	private:
		double extraCost;

};

#endif
