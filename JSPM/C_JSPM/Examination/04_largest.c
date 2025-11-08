#include <stdio.h>

int main()
{
    int a = 15, b = 9;
    if (a < b)
    {
        printf("%d is largest among %d, %d", b, a, b);
    }
    else
    {
        printf("%d is largest among %d, %d", a, a, b);
    }

    return 0;
}