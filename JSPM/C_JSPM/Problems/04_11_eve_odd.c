#include <stdio.h>

int main()
{
    int a[3][3][3], even = 0, odd = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter the a[%d][%d][%d] element : ", i, j, k);
                scanf("%d", &a[i][j][k]);
                if (a[i][j][k] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("The value of a[%d][%d][%d] element : %d \n", i, j, k, a[i][j][k]);
            }
        }
    }
    printf("even = %d odd = %d", even, odd);
    return 0;
}