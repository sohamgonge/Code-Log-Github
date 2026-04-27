#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream source("first.txt");
    if (!source)
    {
        cout << "File not Opened" << endl;
        return 1;
    }
    ofstream destination("ouput.txt");

    string line;
    while (getline(source, line))
    {
        destination << line << endl;
    }
    source.close();
    destination.close();
    cout << "File copied successfuly!" << endl;
    return 0;
}