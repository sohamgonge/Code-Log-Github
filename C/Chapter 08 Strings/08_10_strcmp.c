#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "Soham";
    char str2[] = "Hello";
    int val = strcmp(str2, str);
    printf("%d", val);
    return 0;
}