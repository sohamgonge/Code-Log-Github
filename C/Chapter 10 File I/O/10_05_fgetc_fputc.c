#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("getcdemo.txt", "r");
    char c = fgetc(ptr);
    printf("The value of my character is %c\n", c);
    return 0;
}