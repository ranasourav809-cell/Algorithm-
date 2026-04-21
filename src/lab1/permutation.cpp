#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Function to generate permutations
void permute(string &str, int l, int r) {
    if(l == r) {
        return;
    }

    for(int i = l; i <= r; i++) {
        swap(str[l], str[i]);
        permute(str, l + 1, r);
        swap(str[l], str[i]); // backtrack
    }
}

int main() {
    cout << "InputSize\tTime(us)\n";

    for(int n = 3; n <= 10; n++) {

        // Create string of size n
        string str = "";
        for(int i = 0; i < n; i++)
            str += char('A' + i);

        auto start = high_resolution_clock::now();

        permute(str, 0, n - 1);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << n << "\t\t" << duration.count() << endl;
    }

    return 0;
}