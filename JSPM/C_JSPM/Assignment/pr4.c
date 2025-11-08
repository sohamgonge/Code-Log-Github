#include <stdio.h>

int main()
{
    int i = 1, factorial = 1, num;
    printf("Enter : ");
    scanf("%d", &num);
    do
    {
        factorial *= i;
        i++;
    } while (i <= num);
    printf("Factorail = %d", factorial);

    return 0;
}