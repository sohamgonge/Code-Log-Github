#include <stdio.h>

int main()
{
    int a[3][3][3], b[3][3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter the a[%d][%d][%d] element : ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter the a[%d][%d][%d] element : ", i, j, k);
                scanf("%d", &b[i][j][k]);
                b[i][j][k] += a[i][j][k];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("The value of a[%d][%d][%d] element : %d \n", i, j, k, b[i][j][k]);
            }
        }
    }

    return 0;
}