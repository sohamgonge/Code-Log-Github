#include <stdio.h>
#include <stdint.h> // for uintptr_t

int main()
{
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %p\n", ptr);
    // ptr++;
    // printf("The value of ptr is %p\n", ptr);

    // char i = 34;
    // char *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    float i = 34;
    float *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);

    return 0;
}