#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "HELL&";
    // cout << s.length() << endl;
    string word ="";
    for(int i = 0; i < s.length(); i++){
        cout << "word : " << word  << endl 
            << " s[i] : " << s[i] << endl
            <<endl;
        word=s[i]+word;
    }
    cout << "word = " << word << endl;
    // cout << isalnum(s[4]) << endl;
    // cout << tolower(s[2]);
    return 0;
}