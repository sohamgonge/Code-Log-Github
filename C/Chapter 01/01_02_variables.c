#include <stdio.h>

int main()
{
    int a = 4;
    // int b = 8.5; This is not a good practice and may lead to problems avoid it.
    float b = 8.5;
    char c = 'u';
    int d = 45;
    int e = 4 + 45;
    printf("The value of a is %d\n", a);
    // \n is an escape sequence which adds a new line
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);
    printf("The value of a and d is %d\n", a + d);
    printf("The value of a and d is %d\n", e);

    return 0;
}