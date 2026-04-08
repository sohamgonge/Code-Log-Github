#include <iostream>
using namespace std;

vector<int> pairSum(vector<int> &nums, int target)
{
    vector<int> ans;
    int i = 0, j = (nums.size() - 1), pairSum = 0;
    while (i < j)
    {
        pairSum = nums[i]+nums[j];
        if (pairSum < target)
        {
            i++;
        }
        else if (pairSum > target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}