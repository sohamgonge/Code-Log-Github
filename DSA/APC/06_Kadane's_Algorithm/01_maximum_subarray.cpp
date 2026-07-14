#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    // Brute Force O(N3)
    // for (int st = 0; st < n; st++)// this tell how many rows 
    // {
    //     for (int en = st; en < n; en++) // this helps to add new element to the output
    //     {
    //         for (int i = st; i <= en; i++)// this does major magic starts from 0 till the end element allowed by the previous loop is achieved
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";// this prints space after completion of printing the last new element adddition
    //     }
    //     cout << endl;// new row start with next element
    // }
    
    // cout << endl;
    // cout << endl;
    // Brute Force O(N2)
    // int maXSum = INT_MIN;
    // for(int st = 0 ; st < n ; st++){
    //     int currSum = 0;
    //     for (int en = st; en < n; en++)
    //     {
    //         currSum +=arr[en];
    //         maXSum = max(currSum,maXSum);
    //     }
    // }
    // cout << maXSum;
    // cout << endl;
    // cout << endl;
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