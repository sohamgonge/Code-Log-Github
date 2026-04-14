#include<iostream>
using namespace std;

void sortColors(vector<int>& nums) { // O(n) single pass
    int n = nums.size();
    short int low = 0, mid = 0, high = n-1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++; mid++;
        } else if(nums[mid] == 1){
            mid++;
        } else{
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}
void display(vector<int> nums){
    int n = nums.size();
    for (size_t i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    
}
int main()
{
    vector<int> nums = {2,0, 2, 1,1,0,1,2,0,0};
    sortColors(nums);
    display(nums);

    return 0;
}