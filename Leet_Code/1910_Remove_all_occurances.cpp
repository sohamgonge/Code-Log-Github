#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        int n = s.length();
        int l = part.length();
        auto pos = s.find(part);
        while (pos != string::npos)
        {
            s.erase(pos, l);
            pos = s.find(part);
        }
        return s;
    }
};

int main()
{

    Solution obj;
    string s = "daabcbaabcbc", part = "abc";
    cout << "Original : " << s << endl;
    s = obj.removeOccurrences(s, part);
    cout << "Result : " << s << endl;

    return 0;
}