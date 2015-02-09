/* Mary Connolly and Ryan Busk
 * interface for package, the base class
 */

#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
using namespace std;

class Package {

	public:
		Package(const string &, const string &, int, double, double);
		double calculateCost();

	private:
		string name;
		string address;
		int zip;
		double weight;
		double costPerOunce;
};

#endif
