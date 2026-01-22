#include<iostream>

int main(){
    // result = (condition) ? option 1 : option 2;
    /*
    Equivalent : 
        if(conditon){
            result = option 1;
        }
        else{
            result =  option 2;
        }
    */
    
    // int max {};

    int a {15};
    int b {20};

    // max = ( a > b ) ? a : b ;
    auto max = ( a > b ) ? a : 44.5f ;
    std::cout << "max : " << max << std::endl;


    // Ternary Initialization
    std::cout << std::endl;
    std::cout << "speed" << std::endl;
    bool fast = false;

    int speed { fast ? 300 : 150};
    std::cout << "The speed is : " << speed << std::endl;

    return 0;
}