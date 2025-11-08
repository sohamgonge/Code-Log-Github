#include <stdio.h>
#include <math.h>

int main()
{
    float num, square_root, square, cube;
    printf("Enter a number : ");
    scanf("%f", &num);
    square_root = sqrt(num);
    square = num * num;
    cube = num * num * num;
    printf("Square root of %.2f : %.2f\n", num, square_root);
    printf("Square of %.2f : %.2f\n", num, square);
    printf("cube of %.2f : %.2f\n", num, cube);

    return 0;
}