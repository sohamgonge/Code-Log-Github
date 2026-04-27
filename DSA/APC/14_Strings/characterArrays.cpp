#include <iostream>
using namespace std;

int main()
{
    // char str[] = {'a', 'b', 'c'};
    // char stra[] = {'a', 'b', 'c', '\0'}; character arrays
    // str = "He";
    // stra = "He"; Not possible as they are not modifiable
    // cout << str << endl;
    // cout << stra << endl;

    // char st[] = {"Hello"}; // string literal
    // cout << st[2] << endl; // internally still a character array // constant pointers

    char str[100];
    // cout << "enter character array : ";
    // cin >> str;
    // cin.getline(str, 100); // stops taking inputer after \n
    cin.getline(str, 100, '$'); // delimiter used stops taking input after $
    cout << str;

    // for(char ch : str){
    //     cout << ch << " " ;
    // }
    // cout << endl;
    // char str[] = "apna college";
    // int len = 0;

    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     cout << str[i];
    //     len++;
    // }
    // cout << endl;
    // cout << "Length : " << len;
    // cout << endl;
    return 0;
}