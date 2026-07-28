#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int rows = mat.size();
    int k = rows - 1;
    for (int i = 0; i < rows; i++)
    {
        int j = i;
        sum += mat[i][j] + mat[i][k - i];
    }
    if(rows%2!=0){
        int mid = rows/2;
        sum -= mat[mid][mid];
    }
    return sum;
    }
};

int main()
{

    Solution obj;
    vector<vector<int>> mat{{1,2,3}, {4,5,6}, {7,8,9}};
    cout << "Sum :" << obj.diagonalSum(mat) << endl;

    return 0;
}