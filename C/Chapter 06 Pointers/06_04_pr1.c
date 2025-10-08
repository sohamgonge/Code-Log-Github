#include <stdio.h>
// Write a program to print the address of a variable adn then use the address to print the value of the variable
int main()
{
    int a = 5;
    printf("The address of the variable a is: %p\n", &a);
    printf("The value of the variable a using its address is: %d\n", *(&a));
    return 0;
}