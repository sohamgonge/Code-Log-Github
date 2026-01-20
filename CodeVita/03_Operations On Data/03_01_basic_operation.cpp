#include<iostream>

int main(){
    int number1, number2;
    int sum { number1 + number2 };
    int other_sum = number1 + number2 + number1;

    std::cout << "The sum is : " << sum << std::endl;
    std::cout << "Other sum is : " << other_sum << std::endl;
    return 0;
}