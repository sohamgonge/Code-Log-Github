#include <iostream>

// template <typename T> T maximum(T a, T b); won't be able to do a function overload
template <typename T>
const T& maximum(const T& a, const T& b);

int main()
{
    double a{23.5};
    double b{51.2};

    std::cout << "Out - &a : " << &a << std::endl;
    double max1 = maximum(a, b);// By value? By reference ? compiler error
    std::cout << "max1 : " << max1 << std::endl;


    return 0;
}
template <typename T>
const T& maximum(const T& a, const T& b){
    std::cout << "In - &a : " << &a << std::endl;
    return (a > b) ? a : b;
}