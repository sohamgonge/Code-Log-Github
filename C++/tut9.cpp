#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    // Selection control Structure : If else-if else ladder
    // if ((age<18)&&(age>0))
    // {
    //     cout<<"You can not come to my party";
    // }
    // else if (age==18)
    // {
    //     cout<<"You are a kid and you will ge t akid pass to the party"<<endl;
    // }
    // else if (age<1)
    // {
    //     cout<<"You are not yet born"<<endl;
    // }
    
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }
    // Selection control sturcture : Switch Case statements

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    
    case 2:
        cout<<"You are 2"<<endl;
        break;
    
    case 22:
        cout<<"You are 22"<<endl;
        break;
    
    default:
    cout<<"No special Case"<<endl;
        break;
    }
    return 0;
}