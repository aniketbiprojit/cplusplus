#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

/** 
 * @see I will be avoiding declaring namespaces
 * 
 * You can add this code below and remove all std:: declarations
 * ` using namespace std; `
 */

/** Global int */ int globalVar = 0;
/** Constant global double */ const double PI = 3.141;

/**  
 * This is our main function, and is run everytime we run the program
 * @param argc number of args passed in main
 * @param argv array of pointers to strings
 *  
 * @returns 0 {integer}
 */
int main(int argc, char **argv)
{
    std::cout << "Welcome to the basics file." << std::endl;

    /** @private Boolean */ bool trueValue = true;
    /** @private Charachter */ char letter = 'A';

    /**
     * @see now we print the min max of the most commanly used datatypes
    */
    std::cout << "Min : (unsigned) short int > " << std::numeric_limits<unsigned short int>::min() << std::endl;
    std::cout << "Max : (unsigned) short int > " << std::numeric_limits<unsigned short int>::max() << std::endl;

    std::cout << "Min : short int > " << std::numeric_limits<short int>::min() << std::endl;
    std::cout << "Max : short int > " << std::numeric_limits<short int>::max() << std::endl;

    std::cout << "Min : int > " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Max : int > " << std::numeric_limits<int>::max() << std::endl;

    std::cout << "Min : long > " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "Max : long > " << std::numeric_limits<long>::max() << std::endl;

    return 0;
}