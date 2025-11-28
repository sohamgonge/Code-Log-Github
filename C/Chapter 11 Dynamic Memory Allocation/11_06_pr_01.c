#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, *ptr2;
    ptr = (int *)malloc(6 * sizeof(int));
    ptr2 = (int *)calloc(3, sizeof(int));
    printf("size of ptr is : %lu\n", sizeof(ptr));
    printf("size of ptr2 is : %lu\n", sizeof(ptr2));
    // because size of pointer in c is 8 bytes, no original way to get size of allocated array in c
    return 0;
}