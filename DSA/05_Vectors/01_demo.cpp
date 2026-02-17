#include <iostream>
// #include <bits/c++.h> avoid 
#include <vector>
using namespace std;



int main()
{
    // vector<int> vec; // Type 1 intiallizer "0 size"
    // vector<int> vec = {1,2,3}; // Type 2 intializer "3 size"
    // vector<int> vec(5,0); 
    vector<int> vec;
    cout << "size = " << vec.size() << endl;
    
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(50);
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;
    cout << "After push back vec size = " << vec.size() << endl;
    
    // vec.pop_back();
    // for(int value : vec){
    //     cout << value << endl;
    // }

    cout << "Front : " << vec.front() << endl;
    cout << "Back : " << vec.back() << endl;
    cout << "vec.at(1) : " << vec.at(1) << endl;
    return 0;
}