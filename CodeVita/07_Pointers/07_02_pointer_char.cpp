#include<iostream>

int main(){
    
    // const char* p_message{"Hello, World!"}; this doesn't work
    const char* p_message{"Hello, World!"}; 

    // Printing out
    // What we do get when we print this out with std::cout
    std::cout << "The message is : " << p_message << std::endl;
    // *p_message = "B"; // compiler error

    std::cout << "*p_message : " << *p_message << std::endl;

    // Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;
    

    return 0;
}