#include <iostream>
#include <string>
#include <sstream>
#include "Assignment6.h"


///////////////////////////////////////////////////////////
//                        MAIN                           //
///////////////////////////////////////////////////////////


int main() {
    std::string input;
    fraction result;
    
    std::getline(std::cin, input);
    std::stringstream in_stream(input);
    calculate(in_stream, result);
    //result = calculateRecursive(in_stream);

    result.display();

    return 0;
}