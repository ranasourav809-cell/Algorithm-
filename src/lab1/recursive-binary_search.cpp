#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cstdlib>
using namespace std;

int BS(const vector<int>& arr, int t, int s, int e) {
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;

    if (arr[mid] == t)
        return mid;

    if (t < arr[mid])
        return BS(arr, t, s, mid - 1);

    return BS(arr, t, mid + 1, e);
}

int main() {
    int n = 1000;          
    int target = 500;     
    vector<int> arr(n);

    
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10000;
    }

    
    sort(arr.begin(), arr.end());

    int iterations = 1000;
    long long totalTime = 0;

   
    for (int i = 0; i < iterations; i++) {
        auto start = chrono::high_resolution_clock::now();

        BS(arr, target, 0, arr.size() - 1);

        auto end = chrono::high_resolution_clock::now();

        totalTime += chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    }

    double avgTime = totalTime / (double)iterations;

    
    int index = BS(arr, target, 0, arr.size() - 1);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;

    cout << "Average Execution Time (nanoseconds): " << avgTime << endl;

    return 0;
}
