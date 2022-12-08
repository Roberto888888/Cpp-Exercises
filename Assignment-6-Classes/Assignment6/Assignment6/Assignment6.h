#include <string>


//////////////////////////////////////////////////////////
//                  CLASS DEFINITION                    //
//////////////////////////////////////////////////////////


class fraction {
private:
    // Internal representation of a fraction as 2 integers
    int n;                            // numerator
    int d;                            // denominator

    // I put these in the private section because they are
    // internal operations that shouldn't not be part of an 
    // interface.
    void simplify();
    int naiveGCD();
    int euclidianGCD(int, int);
    int binaryGCD(int, int);

public:
    fraction();                        // class constructor
    void setFraction(int, int);
    void setFraction(fraction);
    void add(fraction);
    void mult(fraction);
    void div(fraction);
    void display(void);
};






//////////////////////////////////////////////////////////////
//                 FUNCTION PROTOTYPES                      //
//////////////////////////////////////////////////////////////

void calculate(std::stringstream &, fraction &);
fraction calculateRecursive(std::stringstream &);
//fraction calculateRecursive(std::string&, int);