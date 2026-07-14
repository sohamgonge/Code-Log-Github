#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int st = 0, end = nums.size() - 1;
        int mid = st + (end - st) / 2;
        while (st <= end)
        {
            mid = st + (end - st) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[st] <= nums[mid]) // left sorted
            {
                if (nums[st] <= target && target <= nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else // right sorted
            {
                if (nums[mid] <= target && target <= nums[end])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main(){

    vector<int> nums = {5,1,3};
    int target = 0;
    Solution sobj;
    cout << "ans : " << sobj.search(nums, target);
    return 0;
}