#include <iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int low, int high) {
    Pair result, left, right;
    int mid;

    if (low == high) {
        result.min = arr[low];
        result.max = arr[low];
        return result;
    }

    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result.min = arr[low];
            result.max = arr[high];
        } else {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }

    mid = (low + high) / 2;

    left = getMinMax(arr, low, mid);
    right = getMinMax(arr, mid + 1, high);

    result.min = min(left.min, right.min);
    result.max = max(left.max, right.max);

    return result;
}

int main() {
    int arr[] = {5, 2, 9, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    Pair ans = getMinMax(arr, 0, n - 1);

    cout << "Minimum = " << ans.min << endl;
    cout << "Maximum = " << ans.max << endl;

    return 0;
}
