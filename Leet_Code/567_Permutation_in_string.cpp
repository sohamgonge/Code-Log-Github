#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    // void display(int arr[]){
    //     char ch = 'a';
    //     for(int i = 0 ; i < 26 ; i++){
    //         cout << ch << " : "<< arr[i] << endl ;
    //         ch++;
    //     }
    //     cout << endl << endl;
    // }
    bool isSameFreq(int freq[], int winfreq[])
    {
        // display(freq);
        // display(winfreq);
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != winfreq[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2)
    {
        int l = s1.length();
        int n = s2.length();
        int freq[26] = {0};
        for (int i = 0; i < l; i++)
        {
            int idx = s1[i] - 'a';
            freq[idx]++;
        }
        int i = 0;
        while ((i + l) <= n)
        {
            int winfreq[26] = {0};
            cout << endl;
            for (int idx = i; idx < (i + l); idx++)
            {
                cout << s2[idx];
                winfreq[s2[idx] - 'a']++;
            }
            cout << endl;
            if (isSameFreq(freq, winfreq))
            {
                return true;
            }
            i++;
        }
        return false;
    }
};

int main()
{

    Solution obj;
    string s1 = "ab", s2 = "eidbaooo";
    bool ans = obj.checkInclusion(s1, s2);
    cout << "Result : " << ans << endl;

    return 0;
}