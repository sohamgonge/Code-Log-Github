#include <stdio.h>
// write a program to print the value of a variable i using a pointer to pointer type
int main()
{
    int i = 345;
    int *ptr = &i;
    int **ptr_ptr = &ptr;

    printf("The value of i is: %d", **ptr_ptr);
    return 0;
}