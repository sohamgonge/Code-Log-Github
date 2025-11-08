#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum = 0, i, reversenum = 0, temp;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;
    for (i = 0; temp > 0; i++)
    {
        sum += (temp % 10);
        temp /= 10;
    }
    temp = num;
    printf("%d", i);
    for (int j = (i - 1); j >= 0; j--)
    {
        reversenum += (temp % 10) * pow(10, j);
        temp /= 10;
    }

    if (num == reversenum)
    {
        printf("Entered number is a palindrome");
    }
    else
    {
        printf("Entered number is not a palindrome");
    }
    return 0;
}