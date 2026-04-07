#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
using namespace std;

void IS(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int n = 1000;          
    int iterations = 1000;

    vector<int> arr(n);

    long long totalTime = 0;

    
    for (int k = 0; k < iterations; k++) {

        
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 10000;
        }

        auto start = chrono::high_resolution_clock::now();

        IS(arr);

        auto end = chrono::high_resolution_clock::now();

        totalTime += chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    }

    double avgTime = totalTime / (double)iterations;

    cout << "Insertion Sort completed.\n";
    cout << "Average Execution Time (nanoseconds): " << avgTime << endl;

    return 0;
}
