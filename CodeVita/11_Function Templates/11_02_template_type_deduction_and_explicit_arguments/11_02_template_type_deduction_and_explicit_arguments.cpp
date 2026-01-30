#include <iostream>

template <typename T> T maximum(T a,T b){
    return (a>b)? a : b;
}

int main()
{
    int a{10};
    int b{23};
    double c{34.7};
    double d{23.4};
    std::string e{"Hello"};
    std::string f{"world"};

    auto max = maximum(a, b); // int type deduced
    maximum(c, d); // double type deduced
    maximum(e, f); // string type deduced

    // Explicit template arguments
    
    maximum<double> (c,d); // explicitly say that we want the double
                                    //version called, if an instance is not there already, it will be created.
                                    // for the first parameter/
    maximum<double>(a, c); // Works, even if parameter are of different types
                                    // there is implicit conversion from int to double for the first paramter
    // maximum<double>(a,e); // Error : can't convert std::string to double
    return 0;
}
