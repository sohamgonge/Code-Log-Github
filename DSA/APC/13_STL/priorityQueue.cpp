#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // priority_queue<int> pq; // by default highest value at top

    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5);
    pq.push(10);
    pq.push(4);
    pq.push(3);

    while (!pq.empty())
    {
       cout << pq.top() << " ";
       pq.pop();
    }
    
    return 0;
}