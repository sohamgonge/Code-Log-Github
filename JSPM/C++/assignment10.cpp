#include<iostream>
using namespace std;

class Comp{
    private : 
        int real, imag;
    public: 
        Comp(int preal = 0, int pcomp = 0){
            real = preal;
            imag = pcomp;
        }

        Comp operator + (){
            return Comp(real, imag);
        }
        Comp operator -(){
            return Comp(-real,- imag);
        }
         void display(){
            cout <<"("<< real <<")"<< " + " <<"("<< imag <<")"<< endl;
         }
};

int main()
{
    Comp c0;
    cout << "Before :";
    c0.display();
    Comp c1(5, 3);
    Comp c2 = +c1;
    cout << "After + :";
    c2.display();
    Comp c3 = -c1;
    cout << "After - :";
    c3.display();
    return 0;
}