#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

int kthSmallest(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pos = partition(arr, low, high);

        if (pos == k - 1)
            return arr[pos];

        if (pos > k - 1)
            return kthSmallest(arr, low, pos - 1, k);

        return kthSmallest(arr, pos + 1, high, k);
    }
    return -1;
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Kth smallest element is: "
         << kthSmallest(arr, 0, n - 1, k);

    return 0;
}
