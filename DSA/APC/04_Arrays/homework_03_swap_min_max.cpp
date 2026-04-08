#include <iostream>
using namespace std;

int main()
{
    int nums[] = {132, 12, 1, 82, -23};
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

    cout << endl;
    cout << "Before Swapping :: smallest = " << smallest << " with index : " << minloc << endl;
    cout << "Before Swapping :: largest = " << largest << " with index : " << maxloc << endl;
    cout << endl;
    swap(nums[minloc], nums[maxloc]);
    cout << "After Swapping :: element with index " << minloc << " : " << nums[minloc] << endl;
    cout << "After Swapping :: element with index " << maxloc << " : " << nums[maxloc] << endl;
    cout << endl;
    return 0;
}