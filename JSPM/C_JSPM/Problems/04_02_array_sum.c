#include <stdio.h>

int main()
{
    int arr[5];
    int i, sum = 0;
    float avg = 0, pro = 1, sub = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Your %d Number :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum += arr[i];
        pro *= arr[i];
        sub -= arr[i];
    }
    avg = sum / 5.0;
    printf("The Average of all the Numbers is %.2f, Product = %.2f, Subtraction = %.2f", avg, pro, sub);
    return 0;
}