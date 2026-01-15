#include<iostream>
//Declaring and Defining a function
int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int main(){
    int first_number{13};//Statement
    int second_number{7};

    std::cout << "First number : " <<first_number <<std::endl;
    std::cout << "Secone number : " <<second_number <<std::endl;

    int sum = first_number + second_number;
    std::cout<< "Sum : " <<sum << std::endl;
    
    sum = addNumbers(24,3);
    std::cout<< "Sum : " <<sum << std::endl;

    sum = addNumbers(2,3);//resusing a function
    std::cout<< "Sum : " <<sum << std::endl;

    return 0;
}