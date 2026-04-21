#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];   
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    cout << "InputSize\tTime(us)\n";

    for(int n = 1000; n <= 10000; n += 1000) {

        int *arr = new int[n];

        for(int i = 0; i < n; i++)
            arr[i] = i + 1;

        auto start = high_resolution_clock::now();

        quickSort(arr, 0, n - 1);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << n << "\t\t" << duration.count() << endl;

        delete[] arr;
    }

    return 0;
}