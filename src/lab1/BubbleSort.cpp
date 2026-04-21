#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    cout << "InputSize\tTime(us)\n";

    for(int n = 1000; n <= 10000; n += 1000) {

        int *arr = new int[n];

        // Worst case (reverse order)
        for(int i = 0; i < n; i++)
            arr[i] = n - i;

        auto start = high_resolution_clock::now();

        bubbleSort(arr, n);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << n << "\t\t" << duration.count() << endl;

        delete[] arr;
    }
    return 0;
}