#include <iostream>
#include <cmath>
#include "Assignment2-Header.h"


using namespace std;


////////////////////////////////////////////////////////////////////////
//     Assignment 2.1 - Gaussian Sum: sum of the first n integers
////////////////////////////////////////////////////////////////////////

// Of course there's the Gauss formula to compute the sum of the first
// n intergers but the point of this assignment is to show loops.


int Gaussian(unsigned n) {
    unsigned tot = 0;
    while (n > 0) {
        tot += n;
        n--;
    }
    return tot;
}






///////////////////////////////////////////////////////////////////////////
// Assignment 2.2 - Another Sum: sum of the even number between 0 and n
///////////////////////////////////////////////////////////////////////////


int Another(unsigned n) {
    unsigned tot = 0;
    while (n > 0) {
        if (n % 2 == 0)
            tot += n;
        n--;
    }
    return tot;
}














////////////////////////////////////////////////////////////////////////////
//              Assignment 2.3 - Prime Factorization
////////////////////////////////////////////////////////////////////////////

// Looping

void decomp(int n) {
    int i = 0;
    while (n != 1) {
        for (i = 2; i <= n; i++) {
            if (n % i == 0) {
                n /= i;
                if (n != 1) {
                    cout << i << " * ";
                    break;
                }
                else {
                    cout << i << endl;
                    return;
                }

            }
        }
    }
}









// Recursive

void decompRec(int x, int d) {
    if (x != d) {
        if (x % d == 0) {
            cout << d << " * ";
            decompRec(x / d, d);
        }
        else {
            d++;
            decompRec(x, d);
        }
    }
    else
        cout << d;
}








/////////////////////////////////////////////////////////////////////////
// Assignment 2.4 - Approximating pi
//////////////////////////////////////////////////////////////////////////


double pi(int n) {
    double p = 0.0;
    int i = 0;
    while (i <= n) {
        p += pow(-1, i) / (2 * i + 1);
        i++;
    }
    return p;
}