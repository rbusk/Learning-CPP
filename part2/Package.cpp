/* Mary Connolly and Ryan Busk
 * Lab 3
 * implentation file for Package
 */

#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

//nondefault constructor
Package::Package(const string &n, const string &a, int z, double w, double cpo)
{
	name = n;
	address = a;
	zip = z;
	weight = w;
	costPerOunce = cpo;
}

string Package::getName()
{
	return name;
}

string Package::getAddress()
{
	return address;
}

int Package::getZip()
{
	return zip;
}

//return cost of sending package, which is the weight of the package in ounces multiplied by the costPerOunce
double Package::calculateCost()
{
	return weight * costPerOunce;
}

double Package::getWeight()
{
	return weight;
}
