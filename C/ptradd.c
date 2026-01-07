#include <stdio.h>

int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};

    printf("a (base address) = %p\n", (void *)a);
    printf("&a[0]           = %p\n", (void *)&a[0]);

    return 0;
}