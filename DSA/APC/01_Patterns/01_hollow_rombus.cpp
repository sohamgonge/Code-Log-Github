#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // top
    for (int i = 0; i < n; i++)
    {
        // space printing
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // printing stars
        cout << "*";
        if (i != 0 || i == (n - 1))
        {
            // printing spaces between stars
            for (int k = 0; k < (2 * i - 1); k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (int i = 0; i < n - 1; i++)
    {
        // space printing
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != (n - 2))
        {
            for (int k = 0; k < 2 * (n - 2 - i) - 1; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
/*
    *
   * *
  *   *
 *     *
  *   *  i = 0. 
   * *   i = 1
    *    i = 2 = (n-2)
// top
    lines = n-1
    left side
        spaces = n - i -1
    right side
        spaces = 2i-1
// bottom
    lines = n - 2
    left side
        spaces = i+1;
    right side
        spaces = 2*(n-2-i) -1;

*/