#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "soham_";
    string str2 = "gonge";

    string str3= str1 + str2; // Concatination
    cout << str3 << endl; 

    str1 = "Soham";
    str2 = "Soham";

    cout << "Are they equal : "<< (str1 == str2)<< endl;    
    // reversing strings of character array

    cout << str1 << endl;
    reverse(str1.begin(), str1.end());
    cout << str1 << endl;
    return 0;
}