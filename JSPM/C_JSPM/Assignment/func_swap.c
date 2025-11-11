#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Value of a and b Before swap are: a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("Value of a and b After swap are: a = %d and b = %d\n", a, b);
    return 0;
}