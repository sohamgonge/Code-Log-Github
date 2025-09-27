#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    srand(time(0));
    int max, min;
    max = 100;
    min = 0;
    // number = rand();
    number = (rand() % (max - min + 1)) + min;
    printf("The number is %d\n", number);

    return 0;
}