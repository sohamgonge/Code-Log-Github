#include <iostream>

int main()
{
    int n1{}, n2{}, ans{};
    char op{};
    std::cout << "Welcome to Calculator" << std::endl;
    std::cout << "Enter the First Number : ";
    std::cin >> n1;
    std::cout << "Enter the Second Number : ";
    std::cin >> n2;

    std::cout << "Enter one operator of the following (+ , - , * , /)";
    std::cin >> op;
    switch (op)
    {
    case '+':
        ans = n1 + n2;
        break;
    case '-':
        ans = n1 - n2;
        break;
    case '*':
        ans = n1 * n2;
        break;
    case '/':
        ans = n1 / n2;
        break;

    default:
        std::cout << "Enter a valid operator" << std::endl;
        break;
    }
    std::cout << n1 << " " << op << " " << n2 << " = " << ans << std::endl;
    return 0;
}