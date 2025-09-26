#include <stdio.h>
// c program to check if a number is even or odd
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    } // else block is optinal, if statement doesn't require a curly braces if the comand is single
    else
    {
        printf("%d is odd\n", a);
    }

    return 0;
}