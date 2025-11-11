#include <stdio.h>

int main()
{
    int temp, x = -121, i = 0, j;
    if (x < 0)
    {
        // return false;
    }

    temp = x;
    while (temp != 0)
    {
        temp /= 10;
        i++;
    }
    temp = x;
    int a[i];
    for (j = 0; x != 0; j++)
    {
        temp = x % 10;
        a[j] = temp;
        x /= 10;
        printf("%d\n", temp);
    }
    for (int k = 0; k < i; k++)
    {
        printf("value of k %d\n", a[k]);
    }
    j = (i - 1);
    i = 0;
    printf("value of j and i are  %d and %d\n", j, i);
    while (((j - i) > 0))
    {
        if (a[i] != a[j])
        {
            printf("It's not a palindrome\n");
        }
        i++;
        j--;
    }
    printf("It's a palindrome");
    return 0;
}