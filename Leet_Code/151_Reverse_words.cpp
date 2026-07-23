#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// class Solution
// {
// public:
//     string reverseWords(string s)
//     {
//         int n = s.length();
//         reverse(s.begin(), s.end());
//         string ans = "";
//         for (int i = 0; i < n; i++)
//         {
//             string word = "";
//             while ((i < n) && s[i] != ' ')
//             {
//                 word = s[i] + word;
//                 i++;
//             }
//             if (word.length() > 0)
//             {
//                 ans += " " + word;
//             }
//         }
//         return ans.substr(1);
//     }
// };
class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.length();
        reverse(s.begin(), s.end());
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            string word = "";
            while ((i < n) && s[i] != ' ')
            {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if (word.length() > 0)
            {
                ans += ' ';
                ans += word;
            }
        }
        return ans.substr(1);
    }
};

int main()
{

    Solution obj;

    // Test case
    string s = "the sky is blue";

    string ans = obj.reverseWords(s);

    // Output
    cout << "Output : " << ans << endl;

    return 0;
}