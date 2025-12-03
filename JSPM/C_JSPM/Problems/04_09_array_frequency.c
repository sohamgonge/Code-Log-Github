#include <stdio.h>

int main()
{
    int k, counta = 1;
    printf("Enter the number of elements : ");
    scanf("%d", &k);
    int a[k], f[k];
    for (int i = 0; i < k; i++)
    {
        printf("Enter your %d element : ", i + 1);
        scanf("%d", &a[i]);
        f[i] = -1;
    }
    for (int i = 0; i < k; i++)
    {
        if (f[i] == -1)
        {

            for (int j = i + 1; j < k; j++)
            {
                if (a[i] == a[j])
                {
                    counta++;
                    f[j] = 0;
                }
                if (counta != 0)
                {
                    f[i] = counta;
                }
            }
        }
        counta = 1;
    }

    printf("The Frequencies of Each element are :\n");
    for (int i = 0; i < k; i++)
    {
        if (f[i] != 0)
        {
            printf("Frequency of %d is %d\n", a[i], f[i]);
        }
    }
    return 0;
}