#include <iostream>
using namespace std;

#define N 4
#define M 3

bool isSafe(int v, int c, int graph[N][N], int color[]) {
    for (int i = 0; i < N; i++) {
        if (graph[v][i] == 1 && color[i] == c)
            return false;
    }
    return true;
}

void solve(int v, int graph[N][N], int color[]) {
    if (v == N) {
        for (int i = 0; i < N; i++)
            cout << color[i] << " ";
        cout << endl;
        return;
    }

    for (int c = 1; c <= M; c++) {
        if (isSafe(v, c, graph, color)) {
            color[v] = c;

            solve(v + 1, graph, color);

            color[v] = 0;
        }
    }
}

int main() {
    int graph[N][N] = {
        {0, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {1, 0, 1, 0}
    };

    int color[N] = {0};

    solve(0, graph, color);

    return 0;
}