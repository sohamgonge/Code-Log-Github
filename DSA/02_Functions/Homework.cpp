#include <iostream>
#include <iomanip>
// using namespace std;

void fibo(int n)
{
    unsigned long long int x = 0, y = 1;
    unsigned long long int z = 0;
    std::cout << "Fibonanci Series for " << n << " is : " << std::endl;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            std::cout << std::setw(5) << x << "\t";
        }
        else if (i == 1)
        {
            std::cout << std::setw(5) << y << "\t";
        }
        else
        {
            z = x + y;
            std::cout << std::setw(5) << z << "\t";
            x = y;
            y = z;
        }
    }
    std::cout << std::endl;
}
void primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        if (i % 2 == 0 && i != 2)
        {
            isPrime = false;
            continue;
        }
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            std::cout << i << " is a prime number." << std::endl;
        }
    }
}
int main()
{
    // fibo(20);
    primes(10000000);
    return 0;
}