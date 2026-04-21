#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Horner's Function
int horner(int coeff[], int n, int x) {
    int result = coeff[0];

    for(int i = 1; i < n; i++) {
        result = result * x + coeff[i];
    }

    return result;
}

int main() {
    cout << "InputSize\tTime(us)\n";

    for(int n = 1000; n <= 10000; n += 1000) {

        int *coeff = new int[n];

        // Fill coefficients
        for(int i = 0; i < n; i++)
            coeff[i] = i + 1;

        int x = 2;

        auto start = high_resolution_clock::now();

        horner(coeff, n, x);

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << n << "\t\t" << duration.count() << endl;

        delete[] coeff;
    }

    return 0;
}