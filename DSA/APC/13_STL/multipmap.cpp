#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 200);
    m.emplace("tv", 300);
    m.emplace("tv", 400);

    m.erase(m.find("tv"));
    for(auto p: m){
        cout << p.first << " : " << p.second << endl;
    }
    cout << endl;
    return 0;
} 