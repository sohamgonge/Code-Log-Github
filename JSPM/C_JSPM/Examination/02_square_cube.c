#include <stdio.h>

int main()
{
    int a = 2;
    int square = a * a;
    int cube = square * a;
    printf("Square of %d is %d\n", a, square);
    printf("Square of %d is %d\n", a, cube);
    return 0;
}