#include<iostream>
using namespace std;

void printArray(int arr[], int n);
void bubbleSort(int arr[], int n){ // 0(n^2)
    for (int i = 0; i < n - 1; i++) // 1 * n
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++) // n * n
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
            
        }
        if (!isSwap) // this means array is already sorted
        {
            return;
        }
        
    }
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    bubbleSort(arr, 5);
    printArray(arr, 5);
    return 0;
}