#include <iostream>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    vector<int> ans = {0, 0};
    int tot = 0;
    int n = grid.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tot += grid[i][j];
        }
    }
    int sum = ((n * n) * ((n * n) + 1)) / 2;
    ans[1] = sum - (tot - ans[0]);
    return ans;
}

int main()
{
    // vector<vector<int>> grid{{1, 3}, {2, 2}};
    vector<vector<int>> grid{{9,1,7},{8,9,2},{3,4,6}};
    vector<int> arr = findMissingAndRepeatedValues(grid);
    cout << "Repeated : " << arr[0]<<endl;
    cout << "Missing : " << arr[1]<<endl;
    // [[9,1,7],[8,9,2],[3,4,6]]
    return 0;
}