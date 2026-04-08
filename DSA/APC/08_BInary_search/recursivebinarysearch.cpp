#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int>& arr, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) // 2nd half
        {
            return recBinarySearch(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid]) // 1st half
        {
            return recBinarySearch(arr, tar, st, mid - 1);
        }
        else // ans found
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    std::vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd
    int tar1 = 12;
    int st = 0, end = arr1.size() - 1;

    std::cout << recBinarySearch(arr1, tar1, st, end) << std::endl;

    std::vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even
    int tar2 = 0;
    end = arr2.size() - 1;   // IMPORTANT: recompute end for arr2
    std::cout << recBinarySearch(arr2, tar2, st, end) << std::endl;

    return 0;
}