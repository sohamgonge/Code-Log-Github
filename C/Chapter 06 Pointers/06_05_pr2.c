#include <stdio.h>
void address(int a);
// write a program with a variable i print it address and then pass it through a function and print its value in the function, are the address different? why?
int main()
{
    int i = 5;
    printf("The value of i in the main is: %d\n", i);
    address(i);
    printf("The address of i in the main is: %p\n", &i);
    return 0;
}
void address(int a)
{
    printf("The value of i after passing it in this function is: %d\n", a);
    printf("The address of i after passing it in this function is: %p\n", &a);
}