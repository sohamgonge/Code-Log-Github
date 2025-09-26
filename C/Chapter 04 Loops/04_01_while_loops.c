#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("The value of a is %d\n", a);
        a++;
    }

    return 0;
}