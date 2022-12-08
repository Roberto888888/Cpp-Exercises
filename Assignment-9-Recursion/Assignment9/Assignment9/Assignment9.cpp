#include <iostream>
#include <string.h>
#include <vector>
#include "A9.h"



// The main function only contains a menu.
// Each exercise in the assignment has it's own function to do
// any preliminary work and the core of the exercises will be
// in separate functions (the ones that have to be handed in).

int main() {
	std::cout << "1 - Reverse number sequence" << std::endl;
	std::cout << "2 - Fibonacci sequence"      << std::endl;
	std::cout << "3 - Palindrome"              << std::endl;
	std::cout << "4 - Levenshtein distance\n"  << std::endl;
	std::cout << "Choose assignment:";

	unsigned short choice;
	std::cin >> choice;

	// cin needs to be "flushed" or it will create problems for
	// subsequent input calls... 
	std::cin.clear();
	std::cin.ignore();

	std::string S;
	std::getline(std::cin, S);

	if (choice == 1)
		assignment9_1(S);
	else if (choice == 2)
		assignment9_2(S);
	else if (choice == 3)
		assignment9_3(S);
	else if (choice == 4)
		assignment9_4(S);
	else
		std::cout << "ERROR!";

	return 0;
}