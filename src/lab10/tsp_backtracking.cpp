#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int DFS(vector<bool> &vis, vector<vector<int> > &cost, int start, int count) {
    int n = cost.size();

    if (count == n)
        return cost[start][0];

    int minCost = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (!vis[i]) {
            vis[i] = true;

            int curr = cost[start][i] + DFS(vis, cost, i, count + 1);

            if (curr < minCost)
                minCost = curr;

            vis[i] = false;
        }
    }

    return minCost;
}

int tspBacktracking(vector<vector<int> > &cost) {
    int n = cost.size();
    vector<bool> vis(n, false);
    vis[0] = true;

    return DFS(vis, cost, 0, 1);
}



int tspDP(int n, vector<vector<int> > &cost) {
    int VISITED_ALL = (1 << n);

    vector<vector<int> > dp(VISITED_ALL, vector<int>(n, INT_MAX));

    dp[1][0] = 0;

    for (int mask = 1; mask < VISITED_ALL; mask++) {
        for (int u = 0; u < n; u++) {

            if (!(mask & (1 << u))) continue;

            for (int v = 0; v < n; v++) {

                if (mask & (1 << v)) continue;

                int newMask = mask | (1 << v);

                if (dp[mask][u] != INT_MAX) {
                    if (dp[newMask][v] > dp[mask][u] + cost[u][v]) {
                        dp[newMask][v] = dp[mask][u] + cost[u][v];
                    }
                }
            }
        }
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (dp[VISITED_ALL - 1][i] != INT_MAX) {
            if (ans > dp[VISITED_ALL - 1][i] + cost[i][0]) {
                ans = dp[VISITED_ALL - 1][i] + cost[i][0];
            }
        }
    }

    return ans;
}



int main() {
    int n = 4;

    vector<vector<int> > cost(4, vector<int>(4));

    cost[0][0]=0; cost[0][1]=10; cost[0][2]=15; cost[0][3]=20;
    cost[1][0]=10; cost[1][1]=0; cost[1][2]=35; cost[1][3]=25;
    cost[2][0]=15; cost[2][1]=35; cost[2][2]=0; cost[2][3]=30;
    cost[3][0]=20; cost[3][1]=25; cost[3][2]=30; cost[3][3]=0;

    cout << "Backtracking Cost: " << tspBacktracking(cost) << endl;
    cout << "DP Cost: " << tspDP(n, cost) << endl;

    return 0;
}