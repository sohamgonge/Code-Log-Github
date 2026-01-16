#include <iostream>

int main()
{

    int value1{10};
    int value2{-300};

    std::cout << "value 1 : " << value1 << std::endl;
    std::cout << "Value 1 : " << value2 << std::endl;
    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

    unsigned int value3{4};
    // unsigned int value4 {-5}; // Compiler error.

    // short and long
    /*
        short == short int
        long == long int
        long long == long long int
    */
    short short_var{-32768};                    // 2 Bytes
    short int short_int{455};                   //
    signed short signed_short{122};             //
    signed short int signed_short_int{-456};    //
    unsigned short int unsigned_short_int{456}; //

    int int_var{55};                // 4 bytes
    signed signed_var{66};          //
    signed int signed_int{77};      //
    unsigned int unsigned_int{77};  //

    long long_var{88};                      // 4 OR 8 Bytes
    long int long_int{33};                  //
    signed long signed_long{44};            //
    signed long int signed_long_int{44};    //
    unsigned long int unsigned_long_int{44};//

    long long long_long{888}; // 8 Bytes 
    long long int long_long_int {999}; //
    signed long long signed_long_long {444}; //
    signed long long int signed_long_long_int{1234}; //
    unsigned long long int unsigned_long_long_int{1234}; //

    return 0;
}