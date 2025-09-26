#include <stdio.h>

int main()
{
    int i = 0, n = 7, factorail = 1;
    for (i = 1; i <= n; i++)
    {
        factorail *= i;
    }
    printf("The factorail of %d is %d\n", n, factorail);
    return 0;
}