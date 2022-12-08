#include <iostream>
#include "A3-functions.cpp"


int main() {
    unsigned l, n;
    
    std::cout << "Number of intervals: ";
    std::cin >> l;

    std::cout << "Size of dataset: ";
    std::cin >> n;

    // An array of size n has to be created at runtime...
    // Old compilers would allow the following, but NOT Visual Studio
    // (Which I've used for these assignments).
 
    // int v[n];     

    // Alternatives:

    // C-STYLE: malloc
    // unsigned * v = (unsigned*)malloc(n*sizeof(unsigned));
    // This allocated memory must be freed when not needed any longer.

    // C++ STYLE: Dynamic allocation.
    // Also in this case v must be freed when no longer needed.
    unsigned * v = new unsigned[n];

    std::cout << "Input data: ";

    for (auto i = 0; i < n; i++)
        std::cin >> v[i];

    // FIND MAXIMUM ELEMENT
    // m = dumbMax(v , n);
    int M = smartMax(v , n);

    // COMPUTE INTERVALS
    compute_intervals(v, n, l, M);

    //free(v);
    delete[] v;
    return 0;
}