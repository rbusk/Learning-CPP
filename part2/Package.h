/* Mary Connolly and Ryan Busk
 * interface for Package, the base class
 */

#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
using namespace std;

class Package {

	public:
		Package(const string &, const string &, int, double, double);
		double virtual calculateCost(); //calculate cost of sending package
		double getWeight(); //return weight
		string getName();
		string getAddress();
		int getZip();

	private:
		string name; //customer's name
		string address;
		int zip; //zip code
		double weight; //of package
		double costPerOunce; //to send package
};

#endif
