#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int i = 0;
      int m = matrix.size();
      cout << m << endl;
      int n = matrix[0].size();
      cout << n << endl;
      cout << matrix[i][2] <<endl;
      while(target <= matrix[i][n-1] && i < m){
        i++;
      } 
      int st = 0;
      int en = n - 1;
      while(st<=en && i < m){
        int mid = st + (en - st)/2;
        if(matrix[i][mid] == target){
            return true;
        }
        else if(matrix[i][mid] < target){
            st = mid + 1;
        }
        else{
            en = mid - 1;
        }
      } 
      return false;
    }
};

int main()
{

    Solution obj;
    int tar = 3;
    vector<vector<int>> mat{{1,2,3}, {4,5,6}, {7,8,9}};
    cout << "Sum :" << obj.searchMatrix(mat, tar) << endl;

    return 0;
}