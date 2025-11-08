#include <stdio.h>

int main()
{
    int num = 9;
    if (num > 0)
    {
        printf("%d is Positive\n", num);
    }
    else if (num == 0)
    {
        printf("%d is Zero\n", num);
    }
    else
    {
        printf("%d is Negative\n", num);
        /* code */
    }

    return 0;
}