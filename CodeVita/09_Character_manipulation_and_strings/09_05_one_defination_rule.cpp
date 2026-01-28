#include <iostream>

// Variable : Declaration and defination
double weight{};

// double weight{}; //error: redefinition of 'weight'

double add(double a, double b);

struct Point
{
    double m_x;
    double m_y;
};


// struct Point
// {
//     double m_x;
//     double m_y;
// };
//  for classes the multiple defination can be there but they shoudl be in different translation units  i.e different files
int main()
{
    double result = add(10,20);
    std::cout << "result : " << result << std::endl;
    return 0;
}
double add(double a, double b){
    return a + b;
}
// double add(double a, double b){
//     return a + b;
// } // compiler error for multiple defination or redefination