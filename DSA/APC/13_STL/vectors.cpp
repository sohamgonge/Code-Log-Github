#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec; // 0
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    // vec.pop_back();


    // for(int val : vec){
    //     cout << val << " ";
    // }
    // cout << endl;


    // cout << "val at idx 2 is " << vec[2] << " or " << vec.at(2) << endl;


    // cout << "front : " << vec.front() << endl << "back : " << vec.back() << endl;

    // vec.erase(vec.begin()+2, vec.begin()+4);
    // for(int val : vec){
    //     cout << val << " ";
    // }
    // cout << endl;
    
    
    // vec.insert(vec.begin() + 2, 100);
    // for(int val : vec){
    //     cout << val << " ";
    // }
    // cout << endl;


    // vec.clear();
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    // cout << "is empty : " << vec.empty() << endl;


    // Iterator

    vector<int>::iterator it;
    for(it = vec.begin(); it!=vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;
    
    vector<int>::reverse_iterator rit; // vector printing
    for (rit = vec.rbegin(); rit != vec.rend(); rit++)
    {
        cout << *(rit) << " ";
    }
    cout << endl;

                // OR
    for(auto it2 = vec.begin(); it2!=vec.end() ; it2++){
        cout << "using auto" << endl;
    }
    
    return 0;
}