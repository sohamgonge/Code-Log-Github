#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    // ptr = &marks[0];
    ptr = marks; // These both run the same way
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %dth student :", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %dth student is %d\n", i + 1, marks[i]);
        ptr++;
    }

    return 0;
}