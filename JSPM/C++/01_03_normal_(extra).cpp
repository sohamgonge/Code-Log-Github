#include <iostream>

// pass by value
int sum(int a, int b)
{
    return a + b;
}

// pass by address
int addsum(int *a, int *b)
{
    return (*a) + (*b);
}

// pass by reference
int refsum(int &a, int &b)
{
    return a + b;
}

// inline
inline int cube(int x)
{
    return x * x * x;
}

// Default argument
int summation(int a = 0, int b = 0, int c = 0, int d = 0)
{
    return a + b + c + d;
}
void input2(int &num1, int &num2)
{
    std::cout << "Input a number : ";
    std::cin >> num1;
    std::cout << "Input a number : ";
    std::cin >> num2;
}

void input3(int &num3)
{
    std::cout << "Input a number : ";
    std::cin >> num3;
}
int main()
{
    // pass by
    // inline
    // default
    bool iteration;
    int choice{};
    int num1{}, num2{}, num3{}, num4{};
    int inputnos{};
    char answer = 'y';
    while (iteration)
    {
        std::cout << "1. Inline" << std::endl;
        std::cout << "2. Pass by Value" << std::endl;
        std::cout << "3. Pass by Address" << std::endl;
        std::cout << "4. Pass by Reference" << std::endl;
        std::cout << "5. Default Arguments" << std::endl;
        std::cout << "Chose an option to perform summation: ";
        std::cin >> choice;
        if (choice == 1)
        {
            input3(num1);
        }
        else if (choice < 5)
        {
            std::cout << "Enter 2 numbers " << std::endl;
            input2(num1, num2);
        }

        switch (choice)
        {
        case 1:
            std::cout << "The cube of " << num1 << " is : " << cube(num1) << std::endl;
            iteration = false;
            break;
        case 2:
            std::cout << "The Sum of " << num1 << " and " << num2 << " is : " << sum(num1, num2) << std::endl;
            iteration = false;
            break;
        case 3:
            std::cout << "The Sum of " << num1 << " and " << num2 << " through pass by Address is : " << addsum(&num1, &num2) << std::endl;
            iteration = false;
            break;
        case 4:
            std::cout << "The Sum of " << num1 << " and " << num2 << " through pass by Reference is : " << refsum(num1, num2) << std::endl;
            iteration = false;
            break;
        case 5:
            std::cout << "How many numbers to be added(upto 4, minmum 2) : ";
            std::cin >> inputnos;
            while (inputnos < 2 || inputnos > 4)
            {
                std::cout << "!!!!!Minimum 2 and maximum 4 numbers only : ";
                std::cin >> inputnos;
            }
            if (inputnos == 2)
            {
                input2(num1, num2);
                std::cout << "The summation is : " << summation(num1, num2) << std::endl;
            }
            else if (inputnos == 3)
            {
                input2(num1, num2);
                input3(num3);
                std::cout << "The summation is : " << summation(num1, num2, num3) << std::endl;
            }
            else if (inputnos == 4)
            {
                input2(num1, num2);
                input3(num3);
                input3(num4);
                std::cout << "The summation is : " << summation(num1, num2, num3, num4) << std::endl;
            }
            iteration = false;
            break;
        default:
            std::cout << "Enter a valid Choice !!!!!!!!!!!!" << std::endl;
            break;
        }
        std::cout << "Do you want do this again(y/n) :";
        std::cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            iteration = true;
        }
    }
    return 0;
}