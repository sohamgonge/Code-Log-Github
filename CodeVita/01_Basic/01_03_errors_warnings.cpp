#include <iostream>

int main()
{
    // compile time error
    std::cout << "Hello World!" << std::endl;

    // Run time error
    int value;
    // Diving and storing a value in value after dividing by zero
    // std::cout<<"value : " << value <<std::endl;
    return 0;
}