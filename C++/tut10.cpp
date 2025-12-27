#include<iostream>
using namespace std;

int main(){
    int i = 0;
    for (int i = 0; i < 40; i++)
    {
        cout<<i<<endl;
    }
    while (i<40)
    {
        cout<<i<<endl;
        i++;
    }
    do
    {
        cout<<i<<endl;
        i++;
    }while (i<40);
    
    return 0;
}