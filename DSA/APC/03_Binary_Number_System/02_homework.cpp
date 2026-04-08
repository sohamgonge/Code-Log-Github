#include <iostream>
using namespace std;

// option 1
bool isPower2(int num)
{
    if (num == 0)
    {
        return false;
    }

    return ((num & -num) == num) ? true : false;
}
// Option 2

int main()
{
    int num{};
    cout << "Enter a number to check if its a power of 2 : ";
    cin >> num;
    if (isPower2(num))
    {
        cout << num << "is the power of 2";
    }
    else
    {
        cout << num << "is not the power of 2";
    }

    return 0;
}