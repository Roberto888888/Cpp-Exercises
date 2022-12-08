#include <iostream>
#include "A7CH.h"

using namespace std;

int main() {
	// Try the constructor
	v2d<double> v1(3.4, 0.7);
	v2d<int> v2(0, -4);
	v2d<double> v3(3, 2);

	// Try the copy constructor
	v2d<int> v4(v2);
	
	// Try the overloaded operator
	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;
	cout << "v3 = " << v3 << endl;
	cout << "v4 = " << v4 << '\n' << endl;

	// Try other operators 
	cout << "v2 + v4 : "        << v2 + v4 << endl;
	cout << "v2 : "             << v2      << '\n' << endl;
	cout << "v1 * v3 : "        << v1 * v3 << '\n' << endl;
	cout << "v1 * k (k = 4) : " << v1 * 4  << endl;
	cout << "v1 : "             << v1      << endl;

	return 0;
}