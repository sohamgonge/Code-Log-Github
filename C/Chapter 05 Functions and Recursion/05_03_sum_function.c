#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype decleration
//  a and b are parameters or variable placeholder

int main()
{
    int c;
    c = sum(2, 15); // function call, here 2 and 15 are the arguments, the actual values that are passed
    printf("The value of c is %d\n", c);

    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}