#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string text;
    ofstream outfile("sample.txt");
    cout << "Enter some text: ";
    getline(cin, text);
    outfile << text;
    outfile.close();
    ifstream infile("sample.txt");
    string content;
    getline(infile, content);
    cout << "Content read from file: " << content << endl;
    infile.close();
    return 0;
}