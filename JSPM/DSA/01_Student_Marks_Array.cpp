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
        for (int i = n; i >= ps; i--)
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
    if (ps < 0 || ps > n - 1)
    {
        cout << "Enter valid position between " << 0 << " and " << n - 1 << endl;
        return;
    }
    else if (ps == n - 1)
    {
        arr[n - 1] = 0;
        n = n - 1;
    }
    else
    {
        for (int i = ps; i < n - 2; i++)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    n--;
    cout << "Marks Deleted Sucessfully" << endl;
    return;
}
void search(int *arr, int &n, int target)
{
    cout << "Roll nos. with marks " << target << " : " << endl;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == target)
        {
            cout << i << endl;
        }
    }
    cout << endl;
}
void display(int *arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << (i) << ". " << arr[i] << endl;
    }
    cout << endl;
    return;
}

int main()
{
    int arr[200] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    // cout << "Enter number of Students : ";
    // cin >> n;
    bool exit = false;

    while (!(exit))
    {
        int choice = 0;
        cout << "1.Insert marks" << endl;
        cout << "2.Delete marks" << endl;
        cout << "3.Search Student marks:" << endl;
        cout << "4.Display" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter Which Operation to Perform : ";
        cin >> choice;
        int marks = 0;
        int pos = 0;
        switch (choice)
        {
        case 1:
            cout << "Enter Marks for Insertion : ";
            cin >> marks;
            cout << "Enter Position for Insertion : ";
            cin >> pos;
            insert(arr, n, pos, marks);
            display(arr, n);
            break;
        case 2:
            cout << "Enter Position for Deletion : ";
            cin >> pos;
            remove(arr, n, pos);
            display(arr, n);
            break;
        case 3:
            cout << "Enter Marks to be searched : ";
            cin >> marks;
            search(arr, n, marks);
            break;
        case 4:
            display(arr, n);
            break;
        case 5:
            exit = true;
            break;
        default:
            cout << "Enter a valid Choice!!! ";
            break;
        }
    }

    return 0;
}