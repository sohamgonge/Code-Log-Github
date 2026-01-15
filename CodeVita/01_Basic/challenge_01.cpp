#include<iostream>

int multiply(int first_parameter, int second_parameter){
    int result = first_parameter*second_parameter;
    return result;
}

int main(){
    int mul;
    mul = multiply(25,5);
    std::cout << "Multiplication is " << mul << std::endl;

    return 0;
}