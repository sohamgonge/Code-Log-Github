#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }

    return 0;
}