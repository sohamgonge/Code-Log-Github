#include<iostream>
#include<fstream>
using namespace std;



int main()
{
    string name;
    float price;
    ofstream out ("how.txt");
    cout << "Enter item name : ";
    cin >> name;

    out << name << "\n";
    
    cout << "Enter the value of " << name << " : ";
    cin >> price;
    out << price << "\n";

    out.close();

    ifstream inf("how.txt");

    inf >> name;
    inf >> price;

    cout << "Item Name : " << name << endl;
    cout << "Price : " << price << endl;

    return 0;
}