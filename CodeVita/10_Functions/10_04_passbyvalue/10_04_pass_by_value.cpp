#include<iostream>

void say_age(int age);

int main(){
    int age {23};// local

    std::cout << std::endl;
    std::cout << "age - (before call) : " << age << "  &age : " << &age << std::endl;
    say_age(age); // argumnentt
    std::cout << "age - (after call̃) : " << age << std::endl;
    return 0;
}

void say_age(int age){ // parameter
    ++age;
    std::cout << "Hello, you are " << age <<  " years old!" <<  "  &age " << &age << std::endl;
}