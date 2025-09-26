#include <stdio.h>

int main()
{
    int i = 0, skip = 5;
    do
    {
        i++;
        if (i != skip)
        {
            continue;
        }
        printf("%d\n", i);

    } while (i < 10);

    return 0;
}