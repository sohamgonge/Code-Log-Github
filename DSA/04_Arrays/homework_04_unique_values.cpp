#include <iostream>
using namespace std;

void uniqueval(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        bool unique = true;
        for (int j = 0; j < sz; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 8, 2, 3, 9, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    cout << "The unique values in array are : ";
    uniqueval(arr, sz);
    cout << endl;
    cout << "Done " << endl;

    return 0;
}