#include <iostream>
using namespace std;

int gcdRec(int a, int b)
{
    if (b == 0){
        return a;
    }
    return gcdRec(b, a%b);
}

int lcm(int a, int b){
    return ((a*b)/gcdRec(a,b));
}
int main()
{
    int a = 20, b = 28;
    int ans = gcdRec(a, b);
    cout << ans << endl;
    ans = lcm(a,b);
    cout << ans << endl;
    return 0;
}