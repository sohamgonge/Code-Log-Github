#include<iostream>
using namespace std;
int main()
{
    int n{}, i{};
    cout << "Enter the size of array : ";
    cin>> n;
    int *Arr = new int[n];
    cout << "Enter the array : " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter an integer : " ;
        cin >> Arr[i];
    }
    cout << "Array is : " ;
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i];
        cout << "\t";
    }
    
    return 0;
}