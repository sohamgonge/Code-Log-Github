#include <stdio.h>
int diff(int i, int n)
{
    int c = n - i;
    if (c < 0)
    {
        c = c * -1;
    }

    return c + 1;
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    // each element being printed is the maximum(distance from its center x and y)
    int n = 7;
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        for (int j = 1; j <= (2 * n - 1); j++)
        {
            printf("%d ", max(diff(i, n), diff(j, n)));
        }
        printf("\n");
    }

    return 0;
}