#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder
{

public:
    // constructors
    Cylinder() = default;
    Cylinder(double rad_param, double height_param);

    // Functions (methods)
    double volume();

    // getters
    double get_base_radius();
    double get_height();

    // setters
    void set_base_radius(double rad_param);
    void set_height(double height_param);

private:
    double base_radius{1.0};
    double height{1.0};
};

#endif
