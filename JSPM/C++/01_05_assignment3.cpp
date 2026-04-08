#include<iostream>
using namespace std;

class student{
    private : 
        int id;
        string name;
        float gpa;
    public : 
    student(){
        id = 0;
        name = "Unknown";
        gpa = 0.0f;
        cout << "Default Constructor Called" << endl;
    }
    student(int para_id, string para_name, float para_gpa){
        id = para_id;
        name= para_name;
        gpa = para_gpa;
        cout << "Parameterised Constructor Called" << endl;
    }
    student(student&obj){
        id = obj.id;
        name = obj.name;
        gpa = obj.gpa;
        cout << "Copy Constructor Called" << endl;
    }
    void display(){
        cout << endl;
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "GPA : " << gpa << endl;
        cout << endl;
    }
    ~student(){
        cout << name << " Object has been destroyed Successfully !!!" <<endl;
    }
};

int main()
{
    student sobj1;
    sobj1.display();
    student sobj2(63, "Soham", 8.74f);
    sobj2.display();
    student sobj3(sobj2);
    sobj3.display();
    return 0;
}