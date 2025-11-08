#include <stdio.h>
#include <math.h>

int main()
{
    int num, reversenum = 0, i, temp, k = 10, j = 1;
    int n;
    double mul;
    printf("Enter a Number : ");
    scanf("%d", &num);
    temp = num;
    n = num;
    for (i = 1; temp > 0; i++)
    {
        temp /= 10;
    }
    i = i - 1;
    // printf("%d\n", i);
    for (j = 1; j <= i; j++)
    {
        mul = pow(10, (i - j));
        // printf("mul = %f\n", mul);
        temp = n % 10;
        // printf("temp = %d\n", temp);
        reversenum += temp * mul;
        // printf("reverse num =%d\n", reversenum);
        n = n - temp;
        n /= 10;
    }
    if (num == reversenum)
    {
        printf("This is a palindrome\n");
    }
    else
    {
        printf("This is not a plaindrome\n");
    }

    printf("%d", reversenum);

    return 0;
}