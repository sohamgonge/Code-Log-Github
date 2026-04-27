#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    // Paste your LeetCode function here
    void reverseString(vector<char> &s)
    {
        int st = 0, end = s.size() - 1;

        while (st < end)
        {
            swap(s[st++], s[end--]);
        }
    }
};

int main()
{

    Solution obj;

    // Test case
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    obj.reverseString(s);

    // Output
    for (char c : s)
    {
        cout << c << " ";
    }

    return 0;
}