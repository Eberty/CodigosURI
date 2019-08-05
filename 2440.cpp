#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &grafo, vector<bool> &vis, int u) {
    vis[u] = true;
    for (size_t i = 0; i < grafo[u].size(); i++) {
        int v = grafo[u][i];
        if (!vis[v])
            dfs(grafo, vis, v);
    }
}

int main() {
    int n, m, x, y, resp = 0;

    scanf("%d %d", &n, &m);
    vector<vector<int>> grafo(n);
    vector<bool> vis(n);
    
    for(int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        x--;
        y--;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }

    for(int i = 0; i < n; i++)
        vis[i] = false;

    for(int i = 0; i < n; i++) {
        if(!vis[i]) {
            dfs(grafo, vis, i);
            resp++;
        }
    }

    printf("%d\n", resp);
    return 0;
}
