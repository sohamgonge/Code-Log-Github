#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    // Brute Force O(N3)
    // for (int st = 0; st < n; st++)
    // {
    //     for (int en = st; en < n; en++)
    //     {
    //         for (int i = st; i <= en; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // Brute Force O(N2)
    // int maxSum = INT_MIN;
    // for(int st = 0 ; st < n ; st++){
    //     int currSum = 0;
    //     for (int en = st; en < n; en++)
    //     {
    //         currSum +=arr[en];
    //         maxSum = max(currSum,maxSum);
    //     }
        
    // }
    // cout << "max subarray sum = " << maxSum <<endl;

    // Kadane's Algorithm
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int st = 0 ; st < n ; st++){
        currSum +=arr[st];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
        }
        cout << maxSum;
    return 0;
}