#include <stdio.h>

int main()
{
    int mark[15];
    for (int i = 0; i < 15; i++)
    {
        printf("Enter Makrs for Student %d : ", i + 1);
        scanf("%d", &mark[i]);
    }
    printf("Marks Lower than 35 are : ");
    for (int i = 0; i < 15; i++)
    {
        if (mark[i] < 35)
        {
            printf("%d index = %d\n", mark[i], i);
        }
    }

    return 0;
}