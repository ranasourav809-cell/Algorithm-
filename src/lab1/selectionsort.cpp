#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    cout << "InputSize\tTime(us)\n";

    for(int n = 1000; n <= 10000; n += 1000) {

        int *arr = new int[n];

        for(int i = 0; i < n; i++)
            arr[i] = n - i;

        auto start = high_resolution_clock::now();

        selectionSort(arr, n);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << n << "\t\t" << duration.count() << endl;

        delete[] arr;
    }
    return 0;
}