#include <stdio.h>
void sumandavg(int a, int b, float *avg, int *sum);
// Write a program to find the average and sum of two numbers using a fucntion and pointers and print their values in main()
int main()
{
    int i = 6, j = 7, sum;
    float avg;
    sumandavg(i, j, &avg, &sum);
    printf("The sum of a and b is: %d\n", sum);
    printf("The sum of a and b is: %.2f\n", avg);

    return 0;
}
void sumandavg(int a, int b, float *avg, int *sum)
{
    *sum = a + b;
    *avg = (a + b) / 2.0;
}