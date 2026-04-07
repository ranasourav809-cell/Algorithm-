#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

void bb(vector<int>& arr, int n) {
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    bb(arr, n - 1);
}

long long timeTaken(vector<int> arr) {
    auto start = chrono::high_resolution_clock::now();

    bb(arr, arr.size());

    auto end = chrono::high_resolution_clock::now();

    return chrono::duration_cast<chrono::microseconds>(end - start).count();
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original Array:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    long long t = timeTaken(arr);

    bb(arr, arr.size());

    cout << "\nSorted Array:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    cout << "\nExecution Time (microseconds): " << t << endl;

    return 0;
}
