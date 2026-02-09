#include<iostream>
#include "oval.h"
#include "shape.h"
#include "circle.h"

void draw_shape(Shape *s){
    s->draw();
}

void draw_shape_ref(const Shape& s_r){
    s_r.draw();
}

int main()
{
    Shape shape1("Shape1");
    Oval oval1(2.0, 3.5, "Circle1");
    Circle circle1(3.3, "Circle1");

    Shape *shape_ptr = &shape1;
    // shape_ptr->draw(); // Shape::draw()

    shape_ptr = &oval1;
    // shape_ptr->draw(); // Oval::draw()

    shape_ptr = &circle1;
    // shape_ptr->draw(); // Circle::draw()

    // Base references
    Shape& shape_ref = oval1;
    // shape_ref.draw();

    

    // Drawing shap
    
    // draw_shape(&oval1);
    // draw_shape(&circle1);


    // Drwaing through reference
    // draw_shape_ref(circle1);

    // Shapes stored in collections
    Shape *shape_collection[]{&shape1, &oval1, &circle1};

    for(Shape *s_ptr : shape_collection){
        s_ptr->draw();
    }

    return 0;
}