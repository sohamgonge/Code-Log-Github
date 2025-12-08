#include <stdio.h>
long long int fib(int a);

int main()
{
    int n;
    printf("Enter the length of Fibonanci series required:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        printf("%lld\t", fib(i));
        if (i == (n - 1))
        {
            printf("\n");
        }
    }

    return 0;
}
long long int fib(int a)
{
    if (a == 1)
    {
        return 1;
        // printf("Reached here\n");
    }
    else if (a == 0)
    {
        return 0;
    }

    else
    {
        return fib(a - 1) + fib(a - 2);
    }
}
