#include <stdio.h>
int occurences(char st[], char c)
{
    int count = 0;
    char *ptr = st;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
            break;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "Sohamm";
    int count;
    occurences(st, 'm');
    count = occurences(st, 'm');
    if (count)
    {

        printf("occurences : %d", count);
    }
    else
    {
        printf("occurences : %d", count);
    }
    return 0;
}