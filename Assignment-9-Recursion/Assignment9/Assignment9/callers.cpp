#include <iostream>
#include <string.h>
#include <vector>
#include <sstream>
#include <algorithm>
#include "A9.h"



////////////////////////////////////////////////////////////

void assignment9_1(const std::string & S) {
	std::vector <int> V;
	StoV(S, V);

	reverse(V);
}


//////////////////////////////////////////////////////////////

void assignment9_2(const std::string & S) {
	std::vector <int> V;
	StoV(S, V);

	// Create a container for the Fibonacci sequence and
	// provide the first 2 numbers in the sequence.
	std::vector<int> F{0, 1};

	if (!V.empty()) {
		int MAX = *max_element(V.begin(), V.end());

		if (MAX >= 2)
			fib(MAX, F);

		for (auto i : V)
			std::cout << F[i] << " ";
	}
	else
		std::cout << "Nothing to print!" << std::endl;
}


/////////////////////////////////////////////////////////////////

void assignment9_3(const std::string & S) {
	std::vector <int> V;
	StoV(S, V);

	if (palindrome(V, V.begin(), V.rbegin()))
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
}






///////////////////////////////////////////////////////////////////

// cin behaves strangely with strings so it's safer to use a 
// stringstream to take in formatted strings.
// I suspect it's a problem in the command prompt because on a 
// different machine simply using cin didn't give me any problem.

void assignment9_4(const std::string & S) {
	std::stringstream stream(S);
	std::string s1, s2;

	stream >> s1;
	stream >> s2;

	std::cout << lev(s1.begin(), s1.end(), s2.begin(), s2.end());
}



//////////////////////////////////////////////////////////////////////

void StoV(const std::string & S, std::vector<int> & V) {
	std::stringstream stream(S);
	int n;
	while (stream >> n)
		V.push_back(n);
}