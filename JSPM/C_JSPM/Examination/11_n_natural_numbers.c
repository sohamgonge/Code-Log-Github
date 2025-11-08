#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", i);
    }

    return 0;
}