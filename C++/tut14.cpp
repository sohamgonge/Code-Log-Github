#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;//4
    char favChar;//1
    float salary;//4
}ep;


union money
{
    int rice;//4
    char car;//1
    float pounds;//4
};

int main(){
    enum meal{breakfast, lunch,dinner};
    meal m1 = breakfast;
    cout<<m1<<endl;
    cout<<(m1==2)<<endl;
    cout<<breakfast<<endl;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;
    // // struct employee soham;
    // ep soham;
    // soham.eId = 4;
    // soham.favChar = 'c';
    // soham.salary = 400000;
    // cout<<soham.salary<<endl;
    // cout<<soham.favChar<<endl;
    // cout<<soham.eId<<endl;



    return 0;
}