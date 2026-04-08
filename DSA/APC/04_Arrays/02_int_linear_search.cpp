#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target) // FOUND
        {
            return i;
        }
    }
    return -1; // NOT FOUND
}
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int target = 8, sz = 7;
    cout << "Location of " << target << " is : " << linearSearch(arr, target, sz) << endl;

    return 0;
}