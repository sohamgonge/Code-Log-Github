#include <stdio.h>
void reverse(int *arr, int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int ilen;
    printf("Enter the no.of elements : ");
    scanf("%d", &ilen);
    int arr[ilen];
    for (int i = 0; i < ilen; i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr, ilen);
    for (int i = 0; i < ilen; i++)
    {
        printf("The value of %d element is : %d\n", i+1, arr[i]);
    }

    return 0;
}