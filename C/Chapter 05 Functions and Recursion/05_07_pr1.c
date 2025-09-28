#include <stdio.h>
float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);
    printf("The value of average of %d, %d and %d is %f\n", a, b, c, average(a, b, c));
    return 0;
}

float average(int a, int b, int c)
{
    float result;
    result = (a + b + c) / 3.0;
    return result;
}