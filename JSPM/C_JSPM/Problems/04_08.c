#include <stdio.h>

int main()
{
    int arr[3][3];
    int rry[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Your Element for row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("For another Array :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Your Element for row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &rry[i][j]);
            rry[i][j] += arr[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", rry[i][j]);
        }
        printf("\n");
    }
    return 0;
}