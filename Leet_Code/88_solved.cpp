#include <iostream>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[idx--] = nums1[i--];
        }
        else
        {
            nums1[idx--] = nums2[j--];
        }
    }
    while (j >= 0)
    {
        nums1[idx--] = nums2[j--];
    }
}
void display(vector<int> nums)
{
    int n = nums.size();
    for (size_t i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);
    display(nums1);
    return 0;
}