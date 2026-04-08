#include<iostream>
#include<vector>
using namespace std;

bool isPossible(int minAllowedDist, vector<int> &arr, int N, int C){ // O(log(Range)) * N
    int cows = 1, lastStallPos = arr[0];
    for (int i = 0; i < N; i++)
    {
        if ((arr[i] - lastStallPos) >= minAllowedDist)
        {
            cows++;
            lastStallPos = arr[i];
        }
        if (cows == C)
        {
            return true;
        }
        
    }
    return false;
    
}

int getDistance(vector<int> &arr, int N, int C){ // NlogN
    sort(arr.begin(), arr.end());
    int st = 1, end = arr[N - 1] - arr[0];
    int mid = 0;
    int ans = -1;
    while (st <= end)  
    {
        mid = st + (end - st) / 2;
        if(isPossible(mid, arr, N , C)){
            ans = mid;
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}


int main()
{
    int N = 5, C = 3;
    vector<int> arr = {1,2,8,4,9};
    
    cout << getDistance(arr, N, C) << endl;
    return 0;
}