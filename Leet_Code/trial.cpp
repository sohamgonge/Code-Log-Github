#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s = "HELL&";
    cout << s.length() << endl;
    cout << isalnum(s[4]) << endl;
    cout << tolower(s[2]);
    return 0;
}
