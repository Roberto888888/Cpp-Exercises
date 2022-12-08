#include <iostream>
#include <cmath>
#include "Assignment2-Header.h"


int main() {
    unsigned n;

    // Test
    std::cout << "Assignment 2.1 - Gaussian Sum:\n";
    std::cout << "Insert an integer number : ";
    std::cin  >> n;
    std::cout << "Gaussian Sum: ";
    std::cout << Gaussian(n) << "\n\n";

    // Test
    std::cout << "Assignment 2.2 - Another Sum:\n";
    std::cout << "Insert an integer number : ";
    std::cin  >> n;
    std::cout << "Another Sum: ";
    std::cout << Another(n) << "\n\n";

    // Test
    std::cout << "Assignment 2.3.1 - Prime Factorization (loops):\n";
    std::cout << "Insert an integer number : ";
    std::cin  >> n;
    std::cout << "Prime Factorization: ";
    decomp(n);
    std::cout << '\n';

    // Test
    std::cout << "Assignment 2.3.2 - Prime Factorization (Recursive):\n";
    std::cout << "Insert an integer number : ";
    std::cin  >> n;
    std::cout << "Prime Factorization: ";
    decompRec(n, 2);
    std::cout << '\n';

    return 0;
}