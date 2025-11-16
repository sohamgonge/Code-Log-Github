#include <stdio.h>
// i have to store the table of 2, 7 ,9 in a 2d array
int main()
{
    int arr[3][10];
    int n;
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            n = 2;
        }
        else if (i == 1)
        {
            n = 7;
        }
        else if (i == 2)
        {
            n = 9;
        }
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = n * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            n = 2;
        }
        else if (i == 1)
        {
            n = 7;
        }
        else if (i == 2)
        {
            n = 9;
        }
        printf("The multiplication table of %d is : \n", n);
        for (int j = 0; j < 10; j++)
        {
            printf("%d x %d = %d\n", n, j + 1, arr[i][j]);
        }
    }

    return 0;
}