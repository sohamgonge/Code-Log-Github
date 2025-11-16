#include <stdio.h>

int main()
{
    char str[] = "Soham";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}