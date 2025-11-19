#include <stdio.h>

int main()
{
    char arr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf(" %c", &arr[i]);
    }
    printf("You Entered These characters : ");
    for (i = 4; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }

    return 0;
}