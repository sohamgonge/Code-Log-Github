#include <stdio.h>
// to find if entered is lower case or not
int main()
{
    char c;
    printf("Enter your char:");
    scanf("%c", &c);
    // 97-122
    if (c <= 122 && c >= 97)
    {
        printf("lowercase");
    }
    else
    {
        printf("uppercase");
    }

    return 0;
}