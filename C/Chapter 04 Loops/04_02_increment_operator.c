#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i++ is %d\n", i++);
    // i++ phele print fir increment. ++i phele increment fir print, similar for similar operator like -
    printf("The value of ++i is %d\n", ++i);
    printf("The value of i after i++ is %d\n", i);
    i += 10; // compound increment operator can be done with - * / %
    printf("Value of i after using compound incremnt operator %d\n", i);
    return 0;
}