#include <iostream>
#include "compare.h" // Preprocessor
#include "operations.h"// Preprocessor


int main()
{
    int maximum = max(134,57);
    std::cout << "max : " << maximum << std::endl;

    int minimum = min(146,23);
    std::cout << "min : " << minimum << std::endl;
    
    int multiplicaition = incr_mult(12, 11);
    std::cout << "mult : " << multiplicaition << std::endl;
    
    return 0;
}
