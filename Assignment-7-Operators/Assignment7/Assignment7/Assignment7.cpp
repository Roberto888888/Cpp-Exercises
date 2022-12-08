#include <iostream>
#include <cmath>
#include "V2D.h"


int main() {
	// Try the constructor
	v2d v1(3, 0);
	v2d v2(0, 4);
	v2d v3(3, 2);

	// Try the copy constructor:
	v2d v4(v2);

	// Try the overloaded operator
	std::cout << "v1 = " << v1 << std::endl;
	std::cout << "v2 = " << v2 << std::endl;
	std::cout << "v3 = " << v3 << std::endl;
	std::cout << "v4 = " << v4 << '\n' << std::endl;
	
	// Test
	std::cout << "Pythagoras holds on perpendicular triangles (a,b,c):\n";
	std::cout << "a="    << v1.length();
	std::cout << " , b=" << v2.length();
	
	// Try operators + and *
	// NOTE: precedence of the original operators should be the same.
	// This vector corresponds to the diagonal of the triangle defined 
	// by v1and v2

	v2d v5 = v1 + v2 * (-1);

	std::cout << " , c=" << v5.length() << '\n' << std::endl;
	std::cout << "...but not on non-perpendicular triangles (a,b,c):\n";
	std::cout << "a="    << v3.length();
	std::cout << " , b=" << v4.length();

	v5 = v3 + v4 * (-1);

	std::cout << " , c=" << v5.length() << '\n' << std::endl;
	std::cout << "Note that vector operations like + and * ";
	std::cout << "modify the vectors on the left!" << '\n' << std::endl;
	std::cout << "v5 = v3 + v4 * (-1) : " << v5 << std::endl;
	std::cout << "v3 = " << v3 << std::endl;
	std::cout << "v4 = " << v4 << std::endl;
	return 0;
}
/*
Output should be:
Pythagoras holds on perpendicular triangles:
a=3 b=4 c=5
...but not on non-perpendicular triangles:
a=3.60555 b=4 c=3.60555
*/