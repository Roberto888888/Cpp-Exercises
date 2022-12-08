#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // to use sort

using namespace std;


// The most naive solution is to read the input into a string and then
// manually scraping data: read a letter (a or b) then read digits until 
// the next space, then convert to number, save the number, and repeat...
// It can become a tedious task for a long sequence and it's not very elegant.

// In this version this naive solution is implemented.

// Note_ passing vectors and strings to a function works by value unlike arrays.
// const is used when the function is not supposed to make changes on
// the string or vector passed.

bool createSet(const string& s, vector<int>& Va, vector <int>& Vb);
void display(const vector<int>& V);

// Va and Vb may be global since different functions work with them
// and need to change their values.

int main() {
    string s;
    vector<int> Va, Vb;

    // Input a line from console into s.
    getline(cin, s);

    if (createSet(s, Va, Vb)) {
        sort(Va.begin(), Va.end());
        display(Va);
        sort(Vb.begin(), Vb.end());
        display(Vb);
    }
    else
        cout << "Error" << endl;
    return 0;
}
















/////////////////////////////////////////////////////////////////////////
// Prints the vector elements separated by a white space.
// Uses range based for loop - Available since C++11
/////////////////////////////////////////////////////////////////////////

void display(const vector<int> & V) {
    for (auto n : V)
        cout << n << " ";
}







///////////////////////////////////////////////////////////////////////////
// Read from s and create 2 sets of int, Va and Vb.
// Returns true if that's done successfully.
////////////////////////////////////////////////////////////////////////////

bool createSet(const string & s, vector<int> & Va, vector <int> & Vb) {
    int j;
    char c;
    string n;

    for (int i = 0 ; i < s.size() ; ) {
        if ((c = s[i]) == 'a' || s[i] == 'b') {
            i += 2;
            j = 0;
            while (std::isdigit(s[i]))
                n[j++] = s[i++];
            if (c == 'a')
                Va.push_back(stoi(n));
            else
                Vb.push_back(stoi(n));
            i++;
        }
        else
            return false;
    }
    return true;
}


//////////////////////////////////////////////////////////////////////////////
//                            INSIGHTS
// I don't like to to this manual scraping of the vector (typical of C
// programming). In C++, it's more elegant to use the string as a stream and
// extract formatted data from it.
//////////////////////////////////////////////////////////////////////////////