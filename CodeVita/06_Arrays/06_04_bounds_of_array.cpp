#include<iostream>

int main(){
    
    int numbers[] {1,2,3,4,5,6,7,8,9,0};
    // Read beyond bounds : Will read garbage or crash your program 
    std::cout << "number[12] : " << numbers[12] << std::endl;

    // Write beyond bounds. The compiler allows it. But you don't own the memory at index 12, so other programs may modify it and your program my read bogus data at a later time. Or you can even corrupt data used by other parts of your program
    numbers[12] = 1000;
    std::cout << "numbers[12] : " << numbers[12] << std::endl;

    

    return 0;
}