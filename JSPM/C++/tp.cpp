#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
    }
    Time(int phrs, int pmins)
    {
        hours = phrs;
        minutes = pmins;
    }
    void display()
    {
        cout << "Hours : " << hours << endl;
        cout << "Minutes : " << minutes << endl;
    }
    friend Time addtime(Time &ptob1, Time &ptob2);
};
Time addtime(Time &ptob1, Time &ptob2)
{
    int total_minutes = ptob1.minutes + ptob2.minutes;
    int carry = total_minutes / 60;

    int total_hours = ptob1.hours + ptob2.hours + carry;

    Time ttob3(total_hours, total_minutes % 60);
    return ttob3;
}

int main()
{
    Time tob1(3, 55);
    Time tob2(4, 6);
    Time tob3 = addtime(tob1, tob2);
    tob3.display();
    return 0;
}