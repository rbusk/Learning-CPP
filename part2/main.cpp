/* Mary Connolly and Ryan Busk
 * Lab 3
 *
 * driver file
 */

#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std;

int main()
{
	Package("Ryan", "Indiana", 46556, 2, .05);

	TwoDayPackage("Mary", "California", 91210, 6, .06, 2);
}
