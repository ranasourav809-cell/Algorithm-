#include <iostream>
#include <climits>
#include <ctime>

using namespace std;

#define SIZE 10

// Calculate number of stages
int totalStages(int graph[][SIZE], int n)
{
    int level[SIZE];

    level[n] = 1;

    for (int i = n - 1; i >= 1; i--)
    {
        int highest = 0;

        for (int j = i + 1; j <= n; j++)
        {
            if (graph[i][j] != 0)
            {
                if (level[j] > highest)
                    highest = level[j];
            }
        }

        level[i] = highest + 1;
    }

    return level[1];
}

// Forward shortest path
void forwardPath(
    int graph[][SIZE],
    int n)
{
    int dist[SIZE];
    int nextNode[SIZE];

    dist[n] = 0;

    for (int i = n - 1; i >= 1; i--)
    {
        dist[i] = INT_MAX;

        for (int j = i + 1; j <= n; j++)
        {
            if (graph[i][j] != 0)
            {
                if (dist[j] != INT_MAX &&
                    graph[i][j] +
                            dist[j] <
                        dist[i])
                {
                    dist[i] =
                        graph[i][j] +
                        dist[j];

                    nextNode[i] = j;
                }
            }
        }
    }

    cout << "\nForward Cost = "
         << dist[1]
         << endl;
}

void backwardPath(
    int graph[][SIZE],
    int n)
{
    int dist[SIZE];

    dist[1] = 0;

    for (int j = 2; j <= n; j++)
    {
        dist[j] = INT_MAX;

        for (int i = 1; i < j; i++)
        {
            if (graph[i][j] != 0)
            {
                if (dist[i] != INT_MAX &&
                    dist[i] +
                            graph[i][j] <
                        dist[j])
                {
                    dist[j] =
                        dist[i] +
                        graph[i][j];
                }
            }
        }
    }

    cout << "Backward Cost = "
         << dist[n]
         << endl;
}

int main()
{
    int nodes;

    cout << "Enter vertices: ";
    cin >> nodes;

    int graph[SIZE][SIZE];

    srand(time(0));

    for (int i = 1; i <= nodes; i++)
    {
        for (int j = 1; j <= nodes; j++)
        {
            if (i == j)
                graph[i][j] = 0;

            else if (j > i)
            {
                int r = rand() % 10;

                if (r < 3)
                    graph[i][j] = 0;

                else
                    graph[i][j] = r + 1;
            }

            else
                graph[i][j] = 0;
        }
    }

    cout << "\nCost Matrix:\n";

    for (int i = 1; i <= nodes; i++)
    {
        for (int j = 1; j <= nodes; j++)
            cout
                << graph[i][j]
                << " ";

        cout << endl;
    }

    int stages =
        totalStages(
            graph, nodes);

    cout << "\nStages = "
         << stages
         << endl;

    forwardPath(
        graph, nodes);

    backwardPath(
        graph, nodes);

    return 0;
}