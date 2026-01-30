#include <iostream>

// int maximum( int a, int b){
//     return (a > b)? a : b;
// }

// std::string maximum( const std::string &a, const std::string &b){
//     return (a > b)? a : b;
// }

// long long int maximum(long long int a, long long int b){
//     return (a > b)? a : b;
// }

// Function template
template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T multiply(T a, T b)
{
    return a * b;
}

int main()
{
    int x{5};
    int y{7};

    // std::string x{"Hello"};
    // std::string y{"World"};
    auto result = maximum(x, y);
    std::cout << "result : " << result << std::endl;
    return 0;
}