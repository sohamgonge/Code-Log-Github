// #include <stdio.h>

// int main()
// {
//     int num1, num2, num3, num4;
//     printf("Enter the num1: ");
//     scanf("%d", &num1);
//     printf("Enter the num2: ");
//     scanf("%d", &num2);
//     printf("Enter the num3: ");
//     scanf("%d", &num3);
//     printf("Enter the num4: ");
//     scanf("%d", &num4);
//     if (num1 > num2 && num1 > num3 && num1 > num4)
//     {
//         printf("%d is the largest number amoung %d, %d, %d and %d", num1, num1, num2, num3, num4);
//     }
//     else if (num2 > num1 && num2 > num3 && num2 > num4)
//     {
//         printf("%d is the largest number amoung %d, %d, %d and %d", num2, num1, num2, num3, num4);
//     }
//     else if (num3 > num1 && num3 > num2 && num3 > num4)
//     {
//         printf("%d is the largest number amoung %d, %d, %d and %d", num3, num1, num2, num3, num4);
//     }
//     else if (num4 > num1 && num4 > num3 && num4 > num2)
//     {
//         printf("%d is the largest number amoung %d, %d, %d and %d", num4, num1, num2, num3, num4);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, largest;

    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);
    printf("Enter the num3: ");
    scanf("%d", &num3);
    printf("Enter the num4: ");
    scanf("%d", &num4);

    largest = num1;

    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;
    if (num4 > largest)
        largest = num4;

    printf("%d is the largest number among %d, %d, %d and %d", largest, num1, num2, num3, num4);

    return 0;
}
