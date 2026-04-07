#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
using namespace std;

int minIndex(const vector<int>& arr, int i) {
    int mn = i;
    for (int j = i; j < arr.size(); j++) {
        if (arr[mn] > arr[j])
            mn = j;
    }
    return mn;
}

void swapIndex(vector<int>& arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void ss(vector<int>& arr, int i) {
    if (i == arr.size())
        return;

    int index = minIndex(arr, i);
    swapIndex(arr, index, i);

    ss(arr, i + 1);
}

double timeTaken(vector<int> arr) {
    auto t1 = chrono::high_resolution_clock::now();

    ss(arr, 0);

    auto t2 = chrono::high_resolution_clock::now();

    return chrono::duration<double, milli>(t2 - t1).count();
}

int main() {
    vector<int> values = {10, 100, 1000, 2000, 5000, 10000, 12500, 15000, 17500, 20000, 22500};

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(INT_MIN, INT_MAX);

    for (int n : values) {
        double avg = 0.0;
        vector<int> arr(n);

        for (int j = 0; j < n; j++)
            arr[j] = dis(gen);

        sort(arr.begin(), arr.end());

        for (int i = 0; i < 1000; i++) {
            avg += timeTaken(arr);
        }

        cout << avg / 1000 << ",";
    }

    return 0;
}
