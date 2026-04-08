#include<iostream>
using namespace std;

int Area(int s){
    return s*s;
}
int Area(int l, int b){
    return l*b;
}
int Area(float radi){
    return 3.14*radi*radi;
}

int main()
{
    int side, length, breadth, result;
    float radius;
    cout << "Enter value of square's side : "; 
    cin >> side;
    result = Area(side);
    cout << "Area of Rectangle : " << result << endl;
    cout << "Enter value of Rectangle's : ";
    cout << "Length : "; 
    cin >> length;
    cout << "Breadth : ";
    cin >> breadth;
    result = Area(length, breadth);
    cout << "Area of Rectangle : " << result << endl;
    cout << "Enter value of circle : "; 
    cin >> radius;
    result = Area(radius);
    cout << "Area of Circle : " << result << endl;
    return 0;
}