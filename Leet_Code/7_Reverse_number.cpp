#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        bool negative = false;
        vector<int> digits;
        int digit = 0;
        int start = 1;
        int num = 0;

        if (x < 0)
        {
            negative = true;
        }

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

        for (int val : digits)
        {
            if (val != 0 && start == 1)
            {
                start = 0;
                num = val;
            }
            else
            {
                if ((num > 214748364))
                {
                    return 0;
                }
                else if (num == 214748364)
                {
                    if (negative == true && val > 8)
                    {
                        return 0;
                    }
                    else if (negative == false && val > 7)
                    {
                        return 0;
                    }
                }
                num = num * 10 + val;
            }
        }
        if (negative == true && num)
            if (negative == true)
            {
                return -num;
            }
        return num;
    }
};
int main()
{
    int x = 1563847412;
    cout << "Original : " << x << endl;
    Solution s1;
    int answer = s1.reverse(x);
    cout << "Answer : " << answer;
    cout << endl;
    return 0;
}