#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int sz1, int sz2)
{
    for (int i = 0; i < sz1; i++)
    {
        for (int j = 0; j < sz2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << "  ";
                break;
            }
        }
    }
}

int main()
{
    int arr1[] = {6, 7, 3, 1};
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 3, 4, 5};
    int sz2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << endl;
    cout << "The intersecting elements of array are : ";
    intersection(arr1, arr2, sz1, sz2);
    cout << endl;
    return 0;
}