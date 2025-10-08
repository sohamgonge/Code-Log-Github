#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i;  // j will now store the address of i '*' and 'int' demotes that the j is an address storing variable for integers
    int **k = &j; // Pointer to a Pointer, here k is address storing varaible which stores an address of an pointer which stores an address of an integer that is why its writtedn as int **K
    printf("The value of i is: %d\n", i);
    printf("The value of i using the pointer * address of operator is: %d\n ", *j);
    printf("The Address of i is: %p\n", &i);
    //  to be precise of to avoid error we do %p", (void*)&i because it casts the int* into a generic pointer format or type
    printf("The Address of i using the pointer variable is: %p\n", j);
    printf("The Address of j is: %p\n", (void *)&j);
    printf("The Address of j using the pointer variable k is: %p\n", k);
    printf("The value of j using *(&j) is: %p\n", *(&j));
    // because what the j contians is also an address so we use %p not a %d even tough we intially said it is int
    return 0;
}