#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 57, 89};
    int mathMarks[4];
    mathMarks[0] = 78;
    mathMarks[1] = 14;
    mathMarks[2] = 12;
    mathMarks[3] = 23;
    cout << "These are Marks" << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << "These are Math Marks" << endl;
    mathMarks[2] = 123; // You can change the values of an array
    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;
    // cout << mathMarks[2] << endl;
    // cout << mathMarks[3] << endl;

    // Printing using loops
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << mathMarks[i] << endl;

    }


    // Pointers and arrays
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of marks[0] is : "<<*p<<endl;
    // cout<<"The value of marks[0] is : "<<*(p+1)<<endl;
    // cout<<"The value of marks[0] is : "<<*(p+2)<<endl;
    // cout<<"The value of marks[0] is : "<<*(p+3)<<endl;

    return 0;
}