#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxTimeAllowed)
{
    int painterno = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxTimeAllowed)
        {
            return false;
        }
        if (time + arr[i] <= maxTimeAllowed)
        {
            time += arr[i];
        }
        else
        {
            painterno++;
            time = arr[i];
        }
    }
    if (painterno > m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int painterPartition(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int st = 0, end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout << painterPartition(arr, n, m) << endl;
    return 0;
}