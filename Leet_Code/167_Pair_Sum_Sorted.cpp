#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int i = 0;
        int j = numbers.size()-1;
        int pairSum{0};
        while(i < j){
            pairSum = numbers[i]+numbers[j];
            if(pairSum < target){
                i++;
            }
            else if(pairSum > target){
                j--;
            }
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }
    return ans;
    }
};
int main()
{
    Solution s1;
    // vector<int> numbers = {2, 7, 11, 15};
    // int target = 9;
    vector<int> numbers = {2, 3, 4};
    int target = 6;
    vector<int> ans(2,0);
    ans = s1.twoSum(numbers, target);
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
}