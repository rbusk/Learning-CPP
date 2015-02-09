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

TwoDayPackage::TwoDayPackage(const string &n, const string &add, int zipCode, double w, double cPO, int c)
	: Package(n, add, zipCode, w, cPO)
{
	extraCost = c;
}

double TwoDayPackage::calculateCost()
{
	return Package::calculateCost() + extraCost;
}
