/* Mary Connolly and Ryan Busk
 * implentation file for Package
 */

#include <iostream>
#include <string>
using namespace std;

Package::Package(const string &n, const string &a, int z, double w, double cpo)
{
	name = n;
	address = a;
	zip = z;
	weight = w;
	costPerOunce = cop;
}
