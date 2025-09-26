#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("The value of i is %d\n", i);
    }
    printf("Printing n natural numbers\n");
    printf("Enter the n: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", i + 1);
    }

    return 0;
}