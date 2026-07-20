#include <iostream>
using namespace std;

void insert(int *arr, int &n, int ps, int marks)
{
    if (ps < 0 || ps > n)
    {
        cout << "Enter a valid position between " << 0 << " and " << n + 1 << endl;
        return;
    }
    else
    {
        for (int i = n; i <= ps; i--)
        {
            if (i == ps)
            {
                arr[i] = marks;
            }
            else
            {
                swap(arr[i - 1], arr[i]);
            }
        }
        n++;
        cout << "Marks inserted sucessfully" << endl;
    }
    return;
}
void remove(int *arr, int &n, int ps){
    if(ps < 0 || ps > n-1){
        cout << "Enter valid position between " << 0 << " and " << n-1 << endl;
        return;
    }
    else if(ps == n-1){
        arr[n-1] = 0;
        n = n-1;
    }
    else{
        for(int i = ps; i < n-2 ; i++){
            swap(arr[i], arr[i+1]);
        }
    }
    n--;
    cout << "Marks Deleted Sucessfully" << endl;
    return ;
}
int search(int *arr, int &n, int target){
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==target){
            return i;
        }
    }
}
void display(int *arr, int &n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{

    return 0;
}