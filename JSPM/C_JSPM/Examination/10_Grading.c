#include <stdio.h>

int main()
{
    int marks = 78;
    if (marks >= 90)
    {
        printf("Your Grade is A Good Work");
    }
    else if (marks >= 80)
    {
        printf("Your Grade is B Do better next time");
    }
    else
    {
        printf("Your Marks are too low to be graded"); // just added for fun purposes not required in question
    }

    return 0;
}