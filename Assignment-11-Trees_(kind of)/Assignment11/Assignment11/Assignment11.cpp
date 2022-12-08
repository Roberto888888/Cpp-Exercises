#include <iostream>
#include "Fib_Tree.h"



///////////////////////////////////////////////////
//                   TESTER 
///////////////////////////////////////////////////
int main() {
	unsigned n;
	std::cout << "Highest Fibonacci number: ";
	Tree T;
	std::cin >> n;
	T.buildTree(n);
	T.printTree();

	return 0;
}