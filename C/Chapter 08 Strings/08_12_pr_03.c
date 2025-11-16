#include <stdio.h>
int length(char *str)
{
    char *ptr = str;
    int l = 0;
    while (*ptr != '\0')
    {
        l++;
        ptr++;
    }
    return l;
}
int main()
{
    char st[] = "Soham";
    int l = length(st);
    printf("The length of entered string is %d", l);
    return 0;
}