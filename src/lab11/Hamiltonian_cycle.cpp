#include <iostream>
using namespace std;

#define N 5

void nextValue(int k, int graph[N][N], int x[]) {
    while (true) {
        x[k] = (x[k] + 1) % N;

        if (x[k] == 0)
            return;

        if (graph[x[k - 1]][x[k]] == 1) {
            int j;
            for (j = 0; j < k; j++) {
                if (x[j] == x[k])
                    break;
            }

            if (j == k) {
                if (k < N - 1 || (k == N - 1 && graph[x[k]][x[0]] == 1))
                    return;
            }
        }
    }
}

void hamiltonian(int k, int graph[N][N], int x[]) {
    while (true) {
        nextValue(k, graph, x);

        if (x[k] == 0)
            return;

        if (k == N - 1) {
            for (int i = 0; i < N; i++)
                cout << x[i] << " ";
            cout << x[0] << endl;
        } else {
            hamiltonian(k + 1, graph, x);
        }
    }
}

int main() {
    int graph[N][N] = {
        {0,1,0,1,0},
        {1,0,1,1,1},
        {0,1,0,0,1},
        {1,1,0,0,1},
        {0,1,1,1,0}
    };

    int x[N] = {0};
    x[0] = 0;

    hamiltonian(1, graph, x);

    return 0;
}