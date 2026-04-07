#include <iostream>
#include <vector>
#include <string>
using namespace std;

string HR(int i, const vector<int>& arr) {
    // Base case
    if (i == arr.size() - 1)
        return to_string(arr[i]);

    // Recursive case
    return to_string(arr[i]) + " + x(" + HR(i + 1, arr) + ")";
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << HR(0, arr) << endl;

    return 0;
}
