#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "Hello";
    char str2[10] = "Soham";
    strcat(str, str2);
    printf("%s", str);
    return 0;
}