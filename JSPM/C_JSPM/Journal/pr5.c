#include <stdio.h>
void change(int *a, int *b)
{
    *a += 5;
    *b *= 2;
}
int main()
{
    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    printf("Value of a = %d, b = %d Before Function call\n", a, b);
    change(&a, &b);
    printf("Value of a = %d, b = %d After Function call\n", a, b);
    return 0;
}