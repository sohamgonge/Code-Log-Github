#include <stdio.h>

void printarr(int n, int l, int parr[n][l])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%d ", parr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int dnum[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element of row %d and column %d : ", i + 1, j + 1);
            scanf("%d", &dnum[i][j]);
        }
    }
    printarr(i, j, dnum);

    return 0;
}