/*
1. Two Sum
Solved
Easy

Topics
premium lock icon
Companies

Hint
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

*/
#include <stdio.h>
#include <stdlib.h> // for malloc and free

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *ans = malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }
    return ans; // will only reach here if no solution found
}

int main()
{
    int nums[] = {2, 7, 11, 15}; // Input array
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9; // Target value
    int returnSize; // Will hold size of result array

    int *result = twoSum(nums, numsSize, target, &returnSize);

    // Print result
    printf("Output: [%d, %d]\n", result[0], result[1]);

    // Free allocated memory
    free(result);

    return 0;
}