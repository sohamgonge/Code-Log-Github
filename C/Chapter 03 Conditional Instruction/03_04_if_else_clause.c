#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Entered number is 1\n");
    }
    else if (num == 2)
    {
        printf("Entered number is 2\n");
    }
    else
    {
        printf("Entered number is not 1, 2\n");
        // This is optional since its the last else
    }

    return 0;
}