#include <stdio.h>

int main()
{
    int temp, a, b;
    printf("Enter two Numbers : ");
    scanf("%d", &a);
    printf("and another number :");
    scanf("%d", &b);
    printf("Before swapping : a = %d , b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping using third variable : a = %d , b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without using third variable : a = %d , b = %d\n", a, b);

    return 0;
}