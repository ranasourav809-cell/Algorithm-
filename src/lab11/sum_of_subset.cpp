#include <iostream>
using namespace std;

#define N 4

void sumOfSubsets(int s, int k, int r, int w[], int x[], int n, int W) {
    if (k < n) {
        x[k] = 1;

        if (s + w[k] == W) {
            for (int i = 0; i <= k; i++) {
                if (x[i] == 1)
                    cout << w[i] << " ";
            }
            cout << endl;
        }
        else if (k + 1 < n && s + w[k] + w[k + 1] <= W) {
            sumOfSubsets(s + w[k], k + 1, r - w[k], w, x, n, W);
        }

        if (k + 1 < n && s + r - w[k] >= W && s + w[k + 1] <= W) {
            x[k] = 0;
            sumOfSubsets(s, k + 1, r - w[k], w, x, n, W);
        }
    }
}

int main() {
    int w[N] = {2, 3, 5, 7};
    int n = N;
    int W = 10;

    int x[N] = {0};

    int r = 0;
    for (int i = 0; i < n; i++)
        r += w[i];

    sumOfSubsets(0, 0, r, w, x, n, W);

    return 0;
}