#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x)
{
    int temp = x, i = 0, j;
    if (x < 0)
    {
        return false;
    }
    if (x == 0)
    {
        return true;
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
    }
    j = (i - 1);
    i = 0;
    while (((j - i) > 0))
    {
        if (a[i] != a[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    int x = 121;
    if (isPalindrome(x))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}