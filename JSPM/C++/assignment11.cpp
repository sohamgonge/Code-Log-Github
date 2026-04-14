#include<iostream>
using namespace std;

class demo{
    private : 
        int num;
    public :
        void getdata(){
            cout << "Enter Value : ";
            cin >> num;
        }
        void putdata(){
            cout << "num : " << num << endl;
        }
        demo operator +(demo &pob){
            demo cc;
            cc.num = num + pob.num;
            return cc;
        }
};

int main()
{
    demo aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;
    cout << "aa's ";
    aa.putdata();
    cout << "bb's ";
    bb.putdata();
    cout << "cc's ";
    cc.putdata();
    return 0;
}