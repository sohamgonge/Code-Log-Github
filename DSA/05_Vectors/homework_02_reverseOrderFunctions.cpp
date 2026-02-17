#include <iostream>
using namespace std;

void vectReverse(vector<int> &vec)
{
    int start = 0, end = vec.size() - 1;
    while (start< end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> vec = {4, 2, 7, 8, 1, 2, 5};
    cout << "Before :: " << endl;
    cout << "Vector : ";
    for (int val : vec)
    {
        cout << val << "  ";
    }
    cout << endl;
    
    vectReverse(vec);
    cout << "After :: " << endl;
    cout << "Vector : ";
    for (int val : vec)
    {
        cout << val << "  ";
    }
    cout << endl;
    return 0;
}