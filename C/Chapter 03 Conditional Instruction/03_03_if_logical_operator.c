#include <stdio.h>

int main()
{
    int age, vippass = 0;
    // vippass = 1;
    printf("Enter your age: ");
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || vippass == 1)
    {
        printf("You are between 70 and 18, you can drive\n");
    }
    else
    {
        printf("You can not drive\n");
    }

    if (age == 50)
    {
        printf("Half-Century!!");
    }

    return 0;
}