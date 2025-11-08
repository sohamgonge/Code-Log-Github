#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A' ... 'Z':
        printf("Capital Letter");
        break;

    case 'a' ... 'z':
        printf("small Letter");
        break;
    case 'β':
        printf("small Letter");
        break;

    case '0' ... '9':
        printf("Digit");
        break;

    default:
        printf("Special Symbol");
    }
    return 0;
}