/* Mary Connolly and Ryan Busk
 * Lab 3
 *
 * driver file
 */

#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
	Package("Ryan", "Indiana", 46556, 2, .5);

	TwoDayPackage("Mary", "California", 91210, 6, .6, 2);

	OvernightPackage("Colleen", "Maryland", 21228, 5, .4, .1);
}
