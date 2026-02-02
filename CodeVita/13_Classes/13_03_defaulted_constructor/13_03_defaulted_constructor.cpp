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

private:
    double base_radius{1.0};
    double height{1.0};
};

int main()
{
    Cylinder cylinder;
    std::cout << "volume : " << cylinder.volume() << std::endl;
    return 0;
}