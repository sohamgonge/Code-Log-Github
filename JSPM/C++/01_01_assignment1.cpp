#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;
    int n1{}, n2{}, ans{};
    char op{};
    std::cout << "Welcome to Calculator" << std::endl;
    std::cout << "Enter the 1st Number : " << std::endl;
    std::cin >> n1;
    std::cout << "Enter the 2nd Number : " << std::endl;
    std::cin >> n2;

    std::cout << "Enter an following (+ , - , * , /)" << std::endl;
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
        while (n2 == 0)
        {
            std::cout << "Second number to perform can't be 0 enter another number : " << std::endl;
            std::cin >> n2;
        }
        
        ans = n1 / n2;
        break;

    default:
        std::cout << "Enter a valid operator" << std::endl;
        break;
    }
    std::cout << "Therefore, " << n1 << " " << op << " " << n2 << " = " << ans << std::endl;
    return 0;
}