#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;

#define INF 1000000

void floydWarshall(vector<vector<int> > &cost, vector<vector<int> > &A, int n) {
    A = cost;

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (A[i][j] > A[i][k] + A[k][j]) {
                    A[i][j] = A[i][k] + A[k][j];
                }
            }
        }
    }
}

double measureTime(vector<vector<int> > &graph) {
    int n = graph.size();
    vector<vector<int> > A(n, vector<int>(n));

    clock_t start = clock();

    floydWarshall(graph, A, n);

    clock_t end = clock();

    return (double)(end - start) / CLOCKS_PER_SEC * 1000;
}

vector<vector<int> > generateGraph(int n) {
    vector<vector<int> > g(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                g[i][j] = 0;
            else {
                double prob = (double)rand() / RAND_MAX;
                if (prob < 0.4)
                    g[i][j] = rand() % 50 + 1;
                else
                    g[i][j] = INF;
            }
        }
    }
    return g;
}

int main() {
    srand(time(0));

    vector<int> sizes;
    sizes.push_back(5);
    sizes.push_back(10);
    sizes.push_back(20);
    sizes.push_back(50);
    sizes.push_back(100);

    for (int i = 0; i < sizes.size(); i++) {
        int n = sizes[i];
        double avg = 0;

        vector<vector<int> > graph = generateGraph(n);

        for (int j = 0; j < 5; j++) {
            avg += measureTime(graph);
        }

        cout << (avg / 5) << ", ";
    }

    return 0;
}