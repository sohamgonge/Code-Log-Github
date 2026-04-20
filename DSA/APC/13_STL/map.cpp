#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> m;

    m["TV"] = 100;
    m["Laptop"] = 100;
    m["Headphones"] = 50;
    m["Tablets"] = 120;
    m["Watch"] = 50;

    // m.insert({"Camera", 25});
    //       both works 
    m.emplace("Camera", 25);

    m.erase("TV");

    for(auto p: m){
        cout << p.first << " : " << p.second << endl;
    }

    cout << endl;

    // cout << "Count = " << m.count("Laptop")<< endl;
    // cout << "Count = " << m["Laptop"]<< endl;

    if(m.find("Camera") != m.end()){
        cout << "found\n";
        cout << endl;
    }
    else{
        cout << "not found\n";
        cout << endl;
    }
    return 0;
}