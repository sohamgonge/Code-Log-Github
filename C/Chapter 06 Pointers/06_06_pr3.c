#include <stdio.h>
int tentimes(int *a);
// write a program to change the value of a variable to ten times of its current value. write a function and pass the value by reference
int main()
{
    int i = 5;
    tentimes(&i);
    return 0;
}
int tentimes(int *a)
{
    printf("The value of i from main is %d and ten times of it is %d\n", *a, 10 * (*a));
    return 0;
}