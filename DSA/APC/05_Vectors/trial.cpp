#include <iostream>
using namespace std;

int main()
{
    vector<vector<int>> grid = {{1, 3}, {2, 2}};
    for (size_t i = 0; i < grid.size(); i++)
    {
        for (size_t j = 0; j < grid[i].size(); j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << grid.size();
    return 0;
}