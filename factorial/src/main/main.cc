#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout <<"recursive "<< solution.Factorial_recursive(4)<< std::endl;
    std::cout <<"non_recursive "<< solution.Factorial_non_recursive(4)<< std::endl;

    return EXIT_SUCCESS;
}