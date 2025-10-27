#include <stdio.h>

int main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int spaces = 1; spaces <= (rows - i); spaces++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        // for (int j = 1; j <= i; j++)
        // {
        //     printf("* ");
        // }
        printf("\n");
    }
    return 0;
}