#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        int year;
    
    Car(){
        brand = "TATA";
        year = 2003;
        cout << "Inside default constructor." << endl;
    }
    Car(string pbrand , int pyear){
        brand = pbrand;
        year = pyear;
        cout << "Inside paramterized constructor 1." << endl;
    }
    Car(string pbrand , int pyear, int pyear2){
        brand = pbrand;
        year = pyear2;
        cout << "Inside paramterized constructor 2." << endl;
    }
    void display(){
        cout << "Brand : " << brand << endl;
        cout << "Year : " << year << endl;
    }


};

int main()
{
    Car cobj1;
    cobj1.display();
    Car cobj2("Honda", 2015);
    cobj2.display();
    Car cobj3("Swift", 2015, 2006);
    cobj3.display();

    return 0;
}