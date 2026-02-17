#include<iostream>
using namespace std;

int main()
{
    int nums[] = {132, 12, 1 , 82,-23};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minloc{}, maxloc{};
    
    for (int i = 0; i < size; i++)
    {
        if (smallest != min(nums[i], smallest))
        {
            smallest = min(nums[i], smallest);
            minloc = i;
        }
        if (largest != max(nums[i], largest))
        {
            largest = max(nums[i], largest);
            maxloc = i;
        }
    }

    cout << "smallest = " << smallest  << " with index : " << minloc << endl;
    cout << "largest = " << largest  << " with index : " << maxloc << endl;
    
    return 0;
}