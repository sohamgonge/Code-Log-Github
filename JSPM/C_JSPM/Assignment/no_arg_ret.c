#include <stdio.h>
int returnsum()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    return a + b;
}
int main()
{
    int sum;
    sum = returnsum();
    printf("The sum of a and b is %d", sum);

    return 0;
}