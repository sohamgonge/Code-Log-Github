#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i + 1, *(ptr + i));
//     }
// }
void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 5555; // This will change the actual element at array adress 2 because adress is being passed
}
int main()
{
    int arr[] = {1, 2, 324, 234, 212, 12, 123};
    printArray(arr, 7);
    // printArray(arr, 8); This will lead to printing an extra garbage value
    arr[2];
    return 0;
}