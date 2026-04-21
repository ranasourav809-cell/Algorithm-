#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    cout << "InputSize\tTime(us)\n";

    for(int n = 1; n <= 10; n++) {

        int rows = 1 << n;  // 2^n combinations

        auto start = high_resolution_clock::now();

        for(int i = 0; i < rows; i++) {
            for(int j = n-1; j >= 0; j--) {
                int val = (i >> j) & 1;
            }
        }

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<nanoseconds>(stop - start);

        cout << n << "\t\t" << duration.count() << endl;
    }

    return 0;
}