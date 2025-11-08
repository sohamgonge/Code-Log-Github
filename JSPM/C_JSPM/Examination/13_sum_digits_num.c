#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = 0; num > 0; i++)
    {
        sum += (num % 10);
        num /= 10;
    }
    printf("Sum of Digits of your Number is %d", sum);
    return 0;
}