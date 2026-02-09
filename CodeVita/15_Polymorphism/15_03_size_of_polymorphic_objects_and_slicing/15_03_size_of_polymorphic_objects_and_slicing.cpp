#include<iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    // comparing object sizes
    std::cout << "sizeof(Shape) : " << sizeof(Shape) << std::endl; // Dynamic 32
    std::cout << "sizeof(Oval) : " << sizeof(Oval) << std::endl; // Dynamic 48
    std::cout << "sizeof(Circle) : " << sizeof(Circle) << std::endl; // Dynamic 48

    // Slicing
    Circle circle1(3.3 , "Circle1");
    Shape shape = circle1;
    shape.draw();
    
    return 0;
}