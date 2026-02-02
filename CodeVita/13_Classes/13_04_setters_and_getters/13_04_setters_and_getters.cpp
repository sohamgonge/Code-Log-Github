#include <iostream>

const double PI{3.14159265};
class Cylinder
{

public:
    // constructors
    Cylinder() = default;
    Cylinder(double rad_param, double height_param)
    {
        base_radius = rad_param;
        height = height_param;
    }

    double volume()
    {
        return PI * base_radius * base_radius * height;
    }

    // getters
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }

    // setters
    void set_base_radius(double rad_param)
    {
        base_radius = rad_param;
    }
    void set_height(double height_param)
    {
        height = height_param;
    }

private:
    double base_radius{1.0};
    double height{1.0};
};

int main()
{
    Cylinder cylinder1(1,1);
    std::cout << "volume : " << cylinder1.volume() << std::endl;
    
    // Modify Our Object
    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);
    
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    return 0;
}