#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream rfile("demo.txt");
    string line;
    getline(rfile, cout);
    return 0;
}