#include <iostream>
using namespace std;

void minMax(int arr[], int low, int high, int &min, int &max)
{
    if (low == high)  
    {
        min = arr[low];
        max = arr[low];
        return;
    }

    if (high == low + 1)  
    {
        if (arr[low] < arr[high])
        {
            min = arr[low];
            max = arr[high];
        }
        else
        {
            min = arr[high];
            max = arr[low];
        }
        return;
    }

    int mid = (low + high) / 2;

    int min1, max1;
    int min2, max2;

    minMax(arr, low, mid, min1, max1);
    minMax(arr, mid + 1, high, min2, max2);

    if (min1 < min2){
        min=min1;
    }
    else min = min2;

    if (max1> max2){
        max=max1;
    } else max=max2;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minVal, maxVal;

    minMax(arr, 0, n - 1, minVal, maxVal);

    cout << "Minimum element: " << minVal << endl;
    cout << "Maximum element: " << maxVal << endl;

    return 0;
}