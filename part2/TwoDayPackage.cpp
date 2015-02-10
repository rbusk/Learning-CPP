/* Mary Connolly and Ryan Busk
 * Lab 3
 *
 * implementation file for TwoDayPackage
 */

#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std;

//nondefault constructor which calls Package constructor
TwoDayPackage::TwoDayPackage(const string &n, const string &add, int zipCode, double w, double cPO, double c)
	: Package(n, add, zipCode, w, cPO)
{
	//If the extraCost will be less than 0, switch to positive
	if (c < 0)
	{
		c = -c;
	}
	extraCost = c;
}

//returns cost of sending package, which is the regular cost plus an extra fee
double TwoDayPackage::calculateCost()
{
	return Package::calculateCost() + extraCost;
}
