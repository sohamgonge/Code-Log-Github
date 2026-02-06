#include<iostream>

class Dog{
    public :
        std::string m_name;
};

struct Cat
{
    public : 
        std::string m_name;
};

struct point
{
    double x;
    double y;
};

void print_point(const point& point){
    std::cout << "Point [ x : " << point.x << ", y : " << point.y << "]" << std::endl;
}

int main()
{
    Dog dog1;
    Cat cat1;
    dog1.m_name = "fluffy"; // Compiler error(if set to private)
    cat1.m_name = "Juny";
    std::cout << "dog1 [name] : " << dog1.m_name << std::endl;
    std::cout << "cat1 [name] : " << cat1.m_name << std::endl;

    point point1;
    point1.x = 10;
    point1.y = 55.5;
    print_point(point1);
    
    point1.x = 40.4;
    point1.y = 2.7;
    print_point(point1);
    return 0;
}