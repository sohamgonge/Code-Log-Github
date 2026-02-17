#include <iostream>
using namespace std;

void arrsumul(int arr[], int sz, int &sum, int &mul)
{
    for (int i = 0; i < sz; i++)
    {
        sum+=arr[i];
        mul*=arr[i];
    }
    
}

int main()
{
    int sum{}, mul{1};
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    arrsumul(arr, sz,sum, mul);

    cout << "The sum of all elements of arr is : " << sum << endl;
    cout << "The product of all elements of arr is : " << mul << endl;

    return 0;
}