#include <stdio.h>

int main()
{
    int a = 2, b = 3, c = 6, largest = a;
    if (b > a)
    {
        largest = b;
    }
    if (largest < c)
    {
        largest = c;
    }
    printf("Largest Number among the three %d, %d and %d is %d", a, b, c, largest);

    return 0;
}