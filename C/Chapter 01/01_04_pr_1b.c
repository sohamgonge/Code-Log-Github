#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the length of the rectangle:");
    scanf("%d", &a);
    printf("Enter the breadth of the rectangle:");
    scanf("%d", &b);
    float area = a * b;
    printf("The area of the rectangle is %f", area);
    return 0;
}