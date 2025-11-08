#include <stdio.h>

int main()
{
    // According to question
    int year = 500;
    if (year % 4 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    // Real leap year Evaluation(In reality)
    if (year % 400 == 0)
    {
        printf("Its a leap year");
    }
    else if (year % 100 == 0)
    {
        printf("Its not a leap year");
    }
    else if (year % 4 == 0)
    {
        printf("Its a leap year");
    }
    else
    {
        printf("Its not a leap year");
    }

    return 0;
}