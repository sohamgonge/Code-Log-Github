#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 30; i++)
    {
        if (i==2)
        {
            continue;//will move on to next iteration by skipping all the following statements
        }
        if (i==25)
        {
            break; //exits the loop
        }
        
        
        cout<<i<<endl;
    }
    
    
    return 0;
}
