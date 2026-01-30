#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t) {
    sizeof(T) < 4;           // Simple requirement : Only enforces syntax
    requires sizeof(T) <= 4; // Nested Requirements
};

// TinyType auto add(TinyType auto a, TinyType auto b){
//     return a + b;
// }

// Compound requirement
template <typename T>
concept Addable = requires(T a, T b) {
    // noexpcet is optional
    { a + b } -> std::convertible_to<int>; // Compound requirement
    // checks if a + b is valid syntax, doesn't throw expetions(optional), and the result is convertible to int
};

Addable auto add(Addable auto a, Addable auto b)
{
    return a + b;
}

int main()
{
    /*
    The requries clause can take in four kinds of requirements :
        Simple requirements
        Nested Requirements
        Compound Requirements
        Type Requirements
    */

    // char x{67};
    // char y{56};
    double x{67};
    double y{56};

    // std::string x{"Hello"};
    // std::string y{"World!"};

    auto result = add(x, y);
    std::cout << "result : " << result << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl;

    return 0;
}