#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if(n == 1) {
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    cout << "InputSize\tTime(us)\n";

    for(int n = 1; n <= 15; n++) {

        auto start = high_resolution_clock::now();

        towerOfHanoi(n, 'A', 'B', 'C');

        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<microseconds>(stop - start);

        cout << n << "\t\t" << duration.count() << endl;
    }

    return 0;
}