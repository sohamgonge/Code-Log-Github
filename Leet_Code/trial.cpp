#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = -123;
    vector<int> digits;
    int digit = 0;
    while (x != 0)
    {
        digit = x % 10;
        if (digit < 0)
        {
            digit *= -1;
        }
        digits.push_back(digit);
        x /= 10;
    }
    for(int val : digits){
        cout << val;
    }
    return 0;
}