#include <iostream>
#include <vector>
using namespace std;

// First duplicate method
int dup(const vector<int>& arr) {
    int duplicate = -1;
    int index = arr.size();

    for (int i = 0; i < index; i++) {
        for (int j = i + 1; j < index; j++) {
            if (arr[i] == arr[j]) {
                duplicate = arr[i];
                index = j;
                break;
            }
        }
    }
    return duplicate;
}

// Second duplicate method
int dup2(const vector<int>& arr) {
    int duplicate = -1;
    int n = arr.size() / 2;

    for (int i = 0; i < n; i++) {
        int t = arr[n - i];
        for (int j = 0; j < n - i; j++) {
            if (t == arr[j]) {
                duplicate = t;
                break;
            }
        }
    }
    return duplicate;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 3, 1, 3, 4, 4};

    cout << dup(arr) << endl;
    cout << dup2(arr) << endl;

    return 0;
}
