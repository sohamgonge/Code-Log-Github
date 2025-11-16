#include <stdio.h>
#include <string.h>
int main()
{
    char *str = "Soham";
    char str2[10];
    strcpy(str2, str);
    printf("%s", str2);
    return 0;
}