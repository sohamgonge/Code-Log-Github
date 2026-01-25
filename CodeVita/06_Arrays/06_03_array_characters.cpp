#include <iostream>

int main()
{
    // Array of Characters
    /*
    // Declaring arrays
    // char message [5] {'H', 'e','l','l','o'};
    // print out the array through looping
    std::cout << "message : ";
    for( auto c : message){
        std::cout << c ;
    }
    std::cout << std::endl;

    // Change characters in our array
    message[1] = 'a';
    std::cout << "message : ";
    for(auto c : message){
        std::cout << c ;
    }
    std::cout << std::endl;
    */

    // Direct Print out
    // char message [5] {'H', 'e','l','l','o'}; // may result in printing extra characters (Garbage characters due to lack of null character)
    // std::cout << "message : " << message << std::endl;

    // Proper Null Termination
    char message[]{'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message : " << message << std::endl;

    // OR

    // Auto filled in null characters

    // char message[6] {'H', 'e', 'l', 'l', 'o'}; --------> this will automatically add null character to the end or remaining elements;
    char message1[]{'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;
    std::cout << std::endl;

    //  If a character array is null terminated, It's called as C-String
    char message2[6]{'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;
    std::cout << std::endl;

    // Looks may be deceiving
    // This is not a C string, as there is not null character
    char message3[]{'H', 'e', 'l', 'l', 'o'};
    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;
    std::cout << std::endl;

    // Literal C - Strings
    char message4[]{"Hello, how are you doing"};
    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;
    std::cout << std::endl;

    // Array of char are special
    int numbers [] {1,2,3,4,5};
    std::cout << "number : " << numbers << std::endl;
    // unlike char array number arrays don't print all the elements 
    std::cout << std::endl;

    return 0;
}