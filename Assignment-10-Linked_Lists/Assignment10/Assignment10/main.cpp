#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "double-linked.h"



int main() {
	std::string input;
	std::vector<int> values;
	int * n = new int;
	std::getline(cin, input);
	std::stringstream stream(input);

	while (stream >> *n) {
		values.push_back(*n);
	}
	delete n;

	// Try constructor
	List list;

	// Try insertions
	for (auto n : values)
		list.insert(n);

	// Try printing
	list.print();
	
	// Try reversing
	list.reverse();
	list.print();
	
	//cout << "HERE" << endl;

	list.~List();
	list.print();
	
	return 0;
}