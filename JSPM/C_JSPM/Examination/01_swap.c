#include <stdio.h>

int main()
{
    int a = 5;
    int b = 2;
    int temp;
    // using third variable
    printf("Values Before swap : a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("Values after swap without using third variable : a = %d, b = %d\n", a, b);
    // without using third variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Values after swap without using third variable : a = %d, b = %d\n", a, b);
    return 0;
}