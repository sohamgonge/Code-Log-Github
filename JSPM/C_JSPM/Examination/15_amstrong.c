#include <stdio.h>
#include <math.h>
int main()
{
    int num, amstrong = 0, temp, j;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;
    for (j = 0; temp > 0; j++)
    {
        temp /= 10;
    }
    temp = num;
    for (int i = 0; temp > 0; i++)
    {
        amstrong += (int)pow((temp % 10), j);
        temp /= 10;
    }
    if (num == amstrong)
    {
        printf("%d is an Amstrong Number", num);
    }
    else
    {

        printf("%d is not an Amstrong Number\n", num);
    }
    return 0;
}