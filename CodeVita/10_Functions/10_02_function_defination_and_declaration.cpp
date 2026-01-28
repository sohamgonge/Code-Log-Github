#include <iostream>

int max(int a, int b); // Function declaration, prototype
                       // Signature doens't include return type

int min(int a, int b);

int inc_mul(int, int); // we can leave variable names out while function declaration

int main()
{

    int x{5};
    int y{12};

    int result = max(x, y);
    std::cout << "max : " << result << std::endl;

    result = min(x, y);
    std::cout << "min : " << result << std::endl;

    result = inc_mul(x, y);
    std::cout << "result : " << result << std::endl;

    return 0;
}

// function defination shows up after main
int max(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

// function defination shows up after main
int min(int a, int b)
{
    if (a < b)
        return b;
    else
        return a;
}

int inc_mul(int a, int b)
{
    return (++a) * (++b);
}