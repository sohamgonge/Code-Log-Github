#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t) {
    sizeof(T) <= 4;          // Simple requirement
    requires sizeof(T) <= 4; // Nested requirements
};

template <typename T>
// requires std::integral<T> || std::floating_point<T> // OR operator
// requires std::integral<T> && TinyType<T>
    requires std::integral<T> && requires(T t) {
        sizeof(T) <= 4;          // Simple requirement
        requires sizeof(T) <= 4; // Nested requirements
    }
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int x{6};
    int y{4};
    // long long int x{6};
    // long long int y{4};
    // double x{6};
    // double y{4};

    // std::string x{"6"};
    // std::string y{"4"};

    add(x, y);
    return 0;
}