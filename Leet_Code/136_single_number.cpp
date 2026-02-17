#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans{};
    for (int val : nums)
    {
        ans ^= val;
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Unique value in vector is : " << singleNumber(nums) << endl;
    return 0;
}