#include <stdio.h>

int main()
{
    int i;
    i = 2;
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i < 10);

    return 0;
}
// to print first n natural number

// #include <stdio.h>

// int main()
// {
//     int n;
//     int i = 1;
//     printf("Enter the number of natural number that are to be printed:");
//     scanf("%d", &n);
//     do
//     {
//         printf("%d \t", i);
//         i++;
//     } while (i <= n);

//     return 0;
// }
