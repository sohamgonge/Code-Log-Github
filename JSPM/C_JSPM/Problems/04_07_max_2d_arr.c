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
    printf("For another Array :");
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
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("The maximum value of all is %d and the minimum value is %d", max, min);
    return 0;
}