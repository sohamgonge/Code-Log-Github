#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    // printf("The size of int on my pc is %d\n", sizeof(int));
    ptr = (int *) calloc(6, sizeof(int));
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter the value of %d element : ", i + 1);
    //     scanf("%d", &ptr[i]);
    // }
    for (int j = 0; j < 6; j++)
    {
        printf("The value of %d element is : %d\n", j + 1, ptr[j]);
    }

    return 0;
}