#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MAXVAL 999999

int getMin(int used[], int dist[], int n)
{
    int pos = -1;
    int mn = MAXVAL;

    for (int i = 0; i < n; i++)
    {
        if (!used[i] && dist[i] < mn)
        {
            mn = dist[i];
            pos = i;
        }
    }

    return pos;
}

void dijkstra(
    int src,
    vector<vector<int>> &g,
    int dist[],
    int n)
{
    int used[5000];

    for (int i = 0; i < n; i++)
    {
        used[i] = 0;
        dist[i] = g[src][i];
    }

    dist[src] = 0;

    for (int k = 0; k < n - 1; k++)
    {
        int u =
            getMin(used, dist, n);

        if (u == -1)
            break;

        used[u] = 1;

        for (int j = 0; j < n; j++)
        {
            if (!used[j] &&
                g[u][j] != MAXVAL)
            {
                if (dist[j] >
                    dist[u] + g[u][j])
                {
                    dist[j] =
                        dist[u] + g[u][j];
                }
            }
        }
    }
}

vector<vector<int>>
makeGraph(int n)
{
    vector<vector<int>>
        g(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                g[i][j] = 0;

            else if (rand() % 2)
                g[i][j] = rand() % 10 + 1;

            else
                g[i][j] = MAXVAL;
        }
    }

    return g;
}

int main()
{
    srand(time(0));

    // SMALLER INPUTS
    int sizes[] =
        {100, 500, 1000, 2000};

    for (int i = 0; i < 4; i++)
    {
        int n = sizes[i];

        vector<vector<int>>
            graph =
                makeGraph(n);

        int dist[5000];

        clock_t start =
            clock();

        dijkstra(
            0, graph, dist, n);

        clock_t stop =
            clock();

        double t =
            ((double)(stop - start)) / CLOCKS_PER_SEC;

        cout
            << n
            << " -> "
            << t
            << " sec" << endl;
    }

    return 0;
}