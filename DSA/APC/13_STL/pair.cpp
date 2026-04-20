#include<iostream>
using namespace std;

int main()
{
    // pair<int, int> p = {3, 5};
    // pair<string, int> s = { "Soham " , 19};

    // cout << p.first << endl;
    // cout << p.second << endl;
    // cout << s.first << endl;
    // cout << s.second << endl;

    // Pair of Pair

    // pair<int, pair<char,int>> p = {1,{'a', 3}};

    // cout << p.first << endl;
    // cout << p.second.first << endl;
    // cout << p.second.second << endl;
    
    // Vector of pair
    vector<pair<int,int >> vec = {{1,2}, {2,3}, {3,4}};
    vec.push_back({4,5}); // simply inserts objects
    vec.emplace_back(4,5); // creates in-place objects
    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}