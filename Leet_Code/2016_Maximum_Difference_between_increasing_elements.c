/*Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].

Return the maximum difference. If no such i and j exists, return -1.
Example 1:

Input: nums = [7,1,5,4]
Output: 4
Explanation:
The maximum difference occurs with i = 1 and j = 2, nums[j] - nums[i] = 5 - 1 = 4.
Note that with i = 1 and j = 0, the difference nums[j] - nums[i] = 7 - 1 = 6, but i > j, so it is not valid.
*/
#include <stdio.h>
int maximumDifference(int *nums, int numsSize)
{
    int i, j, ans = -1, k = (numsSize - 1), l, prob;
    i = 0;
    j = k;
    for (k = (numsSize - 1); k != 0; k--)
    {
        for (l = 0; l < k; l++)
        {
            prob = nums[k] - nums[l];
            if (prob > ans)
            {
                ans = prob;
                i = l;
                j = k;
            }
        }
    }
    if (ans == 0)
    {
        return -1;
    }
    return ans;
}

int main()
{
    int nums[] = {7, 1, 5, 4};                     // input array
    int numsSize = sizeof(nums) / sizeof(nums[0]); // calculate array size

    int result = maximumDifference(nums, numsSize); // call the function

    printf("Output: %d\n", result); // print the result
    return 0;
}