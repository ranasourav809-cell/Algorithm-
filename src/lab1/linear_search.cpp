#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
using namespace std;

int LS(const vector<int>& arr, int target, int i) {
    if (i == arr.size())
        return -1;

    if (arr[i] == target)
        return i;

    return LS(arr, target, i + 1);
}


double timeTaken(const vector<int>& arr, int target) {
    auto t1 = chrono::high_resolution_clock::now();

    int ans = LS(arr, target, 0);

    auto t2 = chrono::high_resolution_clock::now();

    return chrono::duration<double, milli>(t2 - t1).count();
}

int main() {
    vector<int> values = {10, 100, 1000, 5000, 10000, 15000, 20000};

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
            avg += timeTaken(arr, arr[0]);
        }

        cout << avg / 1000 << ",";
    }

    return 0;
}
