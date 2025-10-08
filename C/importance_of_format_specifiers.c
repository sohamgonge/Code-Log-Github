#include <stdio.h>

int main()
{
    unsigned int x = 4294967295; // max 32-bit unsigned value
    printf("%d\n", x);           // -1
    printf("%u\n", x);           // 4294967295

    return 0;
}