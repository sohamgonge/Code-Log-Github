#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    // printf("The size of int on my pc is %d\n", sizeof(int));
    int n;
    printf("How many integers you want to enter : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("The value of %d element is : %d\n", j + 1, ptr[j]);
    }
    
    return 0;
}