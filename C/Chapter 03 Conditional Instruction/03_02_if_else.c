#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You are above 90, You can not drive\n");
    }
    else
    {
        printf("You can drive\n");
    }

    if (age == 50)
    {
        printf("Half-Century!!");
    }

    return 0;
}