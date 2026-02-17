#include <iostream>
using namespace std;

int vecLinearSearch(vector<int> &vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {4, 2, 7, 8, 1, 2, 5};
    int target = 8;
    cout << target << " is at location " << vecLinearSearch(vec, target) << " of the array " << endl;
    return 0;
}