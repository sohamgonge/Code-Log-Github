#include <stdio.h>
// Disclaimer: This is not the best meathod to determine if a number is prime or not there are other meathods like sieve meathod which are way more efficient.ß
int main()
{
    int i, n, prime = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (prime == 0)
    {
        printf("Entered number %d is not a Prime Number\n", n);
    }
    else
    {
        printf("Entered number %d is a Prime Number\n", n);
    }

    return 0;
}