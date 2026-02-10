#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main()
{
    Circle circle1(7.2, "circle1");
    Oval oval1(13.3, 1.2, "Oval1");
    
    Shape * shape_ptr = new Circle (10, "Circle");
    // shape_ptr->draw(45, "Red");  // The compiler doesn't know this function exists if not declared in shape class(base class) and rather only declared in the oval class


    return 0;
}