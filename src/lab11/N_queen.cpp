#include <iostream>
using namespace std;

#define N 4

bool isSafe(int k, int i, int x[]) {
    for (int j = 0; j < k; j++) {
        if (x[j] == i || abs(x[j] - i) == abs(j - k))
            return false;
    }
    return true;
}

void solve(int k, int x[]) {
    if (k == N) {
        for (int i = 0; i < N; i++)
            cout << x[i] << " ";
        cout << endl;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (isSafe(k, i, x)) {
            x[k] = i;
            solve(k + 1, x);
        }
    }
}

int main() {
    int x[N] = {0};

    solve(0, x);

    return 0;
}