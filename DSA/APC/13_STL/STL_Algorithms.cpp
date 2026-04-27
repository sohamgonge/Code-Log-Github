#include <iostream>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    if (p1.first < p2.first)
        return true;
    else
        return false;
}

int main()
{
    int arr[5] = {3, 5, 1, 8, 2};

    sort(arr, arr + 5);

    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int> vec = {3, 5, 1, 8, 2};

    // sort(vec.begin(), vec.end());
    sort(vec.begin(), vec.end(), greater<int>());

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<pair<int, int>> par = {{4, 3}, {2, 3}, {1, 3}, {3, 6}};

    sort(par.begin(), par.end());
    for (auto p : par)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << "On basis of Second value : " << endl;
    sort(par.begin(), par.end(), comparator);
    for (auto p : par)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << "To Reverse something : " << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    reverse(vec.begin(), vec.end());
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "To Reverse a Particular Range : 2nd to 4th element" << endl;
    reverse(vec.begin() + 1, vec.begin() + 3);
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << endl;

    // NEXT Permutation
    string s = "abc";
    cout << "Checking next permutation for : " << s << endl;
    cout << "Next permutation : ";
    next_permutation(s.begin(), s.end());
    cout << s << endl;
    cout << "Previous permutation : ";
    prev_permutation(s.begin(), s.end());
    cout << s << endl;
    cout << endl;

    cout << "Max_Element : ";
    cout << *(max_element(vec.begin(), vec.end()));
    cout << endl;
    cout << "Min_Element : ";
    cout << *(min_element(vec.begin(), vec.end()));
    cout << endl;
    cout << endl;

    sort(vec.begin(), vec.end());
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    int target = 2;
    cout << "Searching with Binary Function if " << target << " exists or not : " << binary_search(vec.begin(), vec.end(), target) << endl;
    target = 7;
    cout << "Searching with Binary Function if " << target << " exists or not : " << binary_search(vec.begin(), vec.end(), target) << endl;
    cout << endl;

    int n = 15;
    cout << __builtin_popcount(n) << endl;
    return 0;
}