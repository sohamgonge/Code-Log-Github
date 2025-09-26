#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;

    printf("The value of 3*x - 8*y is %d\n", 3 * x - 8 * y);
    /*
    c doesn't have any BODMAS it works on operator precedence that is priority of operators

    * / % ---> 1st priority
    + - ---> 2nd priority
    = ---> 3rd priority

    inbetween * / and % to break which will be done first it goes by left to right by solving the equation which will be the left most will be solved first, that is using "OPERATOR ASSOCIATIVITY"

    operators of higher priority are evaluated first in absence of parenthesis
    */
    printf("The value of 8 * y / 3 * y is %d\n", 8 * y / 3 * x);
    // why answer is 16 instead of 4
    //  what should happen      what is happening
    //   24/6                   (24/3)*2
    //   4                       8*2 = 16
    return 0;
}