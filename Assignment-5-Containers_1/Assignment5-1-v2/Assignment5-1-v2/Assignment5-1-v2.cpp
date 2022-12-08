#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

//using namespace std;

bool createSet(const std::string &, std::vector<int> &, std::vector <int> &);
void display(const std::vector<int> &);


int main() {
    std::string input;
    std::vector<int> SetA, SetB;

    // Input a line from console into a string
    std::getline(std::cin, input);

    if (createSet(input, SetA, SetB)) {
        sort(SetA.begin(), SetA.end());
        display(SetA);

        sort(SetB.begin(), SetB.end());
        display(SetB);
    }
    else
        std::cout << "Error" << std::endl;
    return 0;
}









//////////////////////////////////////////////////////////////
// Prints the vector elements separated by a white space.
//////////////////////////////////////////////////////////////

void display(const std::vector<int> & V) {
    for (auto n : V)
        std::cout << n << " ";
}











//////////////////////////////////////////////////////////////////
// Read from a string and create 2 sets of int, Va and Vb.
// Returns true that's successful.
///////////////////////////////////////////////////////////////////

using namespace std;

bool createSet(const string & input, vector<int> & SetA, vector <int> & SetB) {
    int n;
    char c;

    // Create and initialize a stream from a string
    std::stringstream stream(input);

    // from the stream data can be taken with the >> operator, like for cin
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