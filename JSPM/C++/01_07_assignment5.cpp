#include<iostream>
using namespace std;

class Demo{
    private :
        int x;
    protected:
        int y;

    public :
        Demo(){
            x = 5;
            y = 7;
        }
    // friend class A;
    friend void display(Demo &dobj);
};
// class A{
//     public :
//     void display(Demo &dobj){
//         cout << "x : " << dobj.x<<endl;
//         cout << "y : " << dobj.y<<endl;
//     }
// };
    void display(Demo &dobj){
        cout << "x : " << dobj.x<<endl;
        cout << "y : " << dobj.y<<endl;
    }

int main()
{
    Demo obj1;
    // A obj2;
    display(obj1);
    return 0;
}