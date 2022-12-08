#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

bool createSet(const std::string &, std::vector<int> &, std::vector <int> &);
int func(std::vector<int> &, std::vector<int> &);

// This assignment is a variation of the previous one, but simpler since the
// additional elements of the longer vector are essentially ignored.



int main() {
    std::string input;
    std::vector<int> SetA, SetB;
    std::getline(cin, input);

    if (createSet(input, SetA, SetB))
        std::cout << func(SetA, SetB);
    else
        std::cout << "Error" << std::endl;
    return 0;
}






//////////////////////////////////////////////////////////////////////////



// This function is unchanged

bool createSet(const string& input, vector<int>& SetA, vector <int>& SetB) {
    int n;
    char c;
    std::stringstream stream(input);

    while (stream >> c) {
        if (c == 'a') {
            stream >> n;
            SetA.push_back(n);
        }
        else if (c == 'b') {
            stream >> n;
            SetB.push_back(n);
        }
        else
            return false;
    }
    return true;
}

int func(std::vector<int> & Va, std::vector<int> & Vb) {
    int p = 0;
    // Get the sizes once to avoid recalling the method size multiple times
    unsigned lA = Va.size();
    unsigned lB = Vb.size();

    // Use a different name for the shorter size
    unsigned& shorter = (lA <= lB) ? lA : lB;

    // Compute the scalar product.
    // Since I have to assume that missing values for the shorter vector
    // are 0, essentially I don't even need to care about the additional 
    // values.
    for (auto i = 0 ; i < shorter ; i++)
        p += (Va[i] * Vb[i]);
    return p;
}