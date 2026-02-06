#include<iostream>

class Dog{
    public :
        Dog() = default;
        void print_info(){

        }

    private :  
        // int age;
        // char a;
        // char b;
        // char c;
        // char d;
        // char e;
        // size_t leg_count; // 8
        // size_t arm_count; // 8
        // // int * p_age; // 8

        // char a; 

        char a;
        char c;
        double b;
};

int main()
{
    Dog dog1;
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(dog1) : " << sizeof(dog1) << std::endl;

    std::string name{"I am the king of the universe!"};

    std::cout << "sizeof(name) : " << sizeof(name) << std::endl;
    return 0;
}