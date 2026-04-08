/*
 n = 4

*      * i = 0 
**    ** i = 1
***  *** i = 2
******** i = 3
***  *** i = 0
**    ** i = 1
*      * i = 2

// top
    left side:
        star : i + 1
    spaces betweeen: 2 * (n - 1 - i)
    right side :
        star : i + 1

// bottom
    lines : n - 1
    left side :
        star : n - i - 1
    spaces between : 2 * (i + 1)
    right side : 
        star :  n - i - 1 
*/
#include<iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // top right star printing
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // top between star's spaces printing
        for (int l = 0; l < (2*(n - 1 - i)); l++)
        {
            cout << " ";
        }
        // top left star printing
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        // bottom right star printing
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
        }
        // bottom between star's spaces printing
        for (int l = 0; l < (2*(i+1)); l++)
        {
            cout << " ";
        }
        // bottom left star printing
        for (int k = 0; k < n - 1 - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}