#include<iostream>

void say_age(int *age);

int main(){
    
    int age{23};
    
    std::cout << "age - (before call) : " << age << std::endl;
    say_age(&age);
    std::cout << "age - (after call) : " << age << std::endl;

    return 0;
}

void say_age(int *age){
    ++(*age);// Changing the copy. Outside age affected
    std::cout << "Hello! you are " << *age << " years old. " << std::endl;

}