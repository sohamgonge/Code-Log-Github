#include<iostream>

void evo(int a){
    if (a%2 == 0)
    {
        std::cout << a << " is a even number." << std::endl;
    }
    else{
        std::cout << a << " is a odd number." << std::endl;
    }
    return;
}
void prime(int a){
    int count{0};
    if (a <= 1)
    {
        std::cout << a << " is not a prime numbers." << std::endl;
        return;
    }
    else
    {
        for (size_t i = 2; i <= a/2; ++i)
        {
            if (a%i == 0)
            {
                if (count == 0)
                {
                    std::cout << a << " is not a prime number and the factors are : ";
                }
                std::cout << i << "\t" << std::endl;
                count++;
            }
        }
        if (count == 0)
        {
            std::cout << a << " is a prime number." << std::endl;
        }
    }
}
int fibo(int a){
    if (a == 0)
    {
        return 0;
    }
    else if(a == 1){
        return 1;
    }
    else{
        return fibo(a-1) + fibo(a-2);
    }
}
void posnego(int a){
    if (a > 0)
    {
        std::cout << a << " is a positive number." << std::endl;
    }
    else if (a<0)
    {
        std::cout << a << " is a negative number." << std::endl;
    }
    else{
        std::cout << a << " is zero." << std::endl;
    }  
}
int main()
{
    int num1, operation;
    char again = 'y';
    std::cout << std::endl << std::endl << "----------------------------------------------------" << std::endl << std::endl;
    while(again == 'y' || again == 'Y'){
        std::cout << "1. Check if a number is even/odd." << std::endl;
        std::cout << "2. Check if a number is its prime." << std::endl;
        std::cout << "3. Print fibonancci series of n numbers :" << std::endl;
        std::cout << "4. Check if number is  +ve, -ve or zero" << std::endl;
        std::cout << "Which operation would you like to perform : " ;
        std::cin >> operation;
        std::cout << "Enter an Integer : ";
        std::cin >> num1;

        switch (operation)
        {
        case 1:
            evo(num1);
            break;
        case 2:
            prime(num1);
            break;
        case 3:
            std::cout << "Fibonancci Sequence for " << num1 << " number : ";
            while (num1 < 0)
            {
                std::cout << "Enter a positive number : ";
                std::cin >> num1;
            }
            for (size_t i = 1; i <= num1; i++)
            {
                std::cout << fibo(i-1)<< "\t";
            }
            std::cout << std::endl;
            break;
        case 4:
            posnego(num1);
            break;
        default:
            std::cout << "Enter a valid option" << std::endl;
            break;
        }
        again = 'n';
        std::cout << "Do you want to do again(y/n) : ";
        std::cin >> again;
        std::cout << std::endl << std::endl << "----------------------------------------------------" << std::endl << std::endl;
    }

    return 0;
}