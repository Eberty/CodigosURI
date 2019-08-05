#include <bits/stdc++.h>

using namespace std;

int res;

void dfs(vector<vector<int>> &grafo, vector<bool> &vis, int u) {
    vis[u] = true;
    res++;
    for (size_t i = 0; i < grafo[u].size(); i++) {
        int v = grafo[u][i];
        if (!vis[v])
            dfs(grafo, vis, v);
    }
}

int main() {
    int t, n, v, a, x, y;
    cin >> t;
    while (t--) {
        cin >> n >> v >> a;
        vector<vector<int>> grafo(v);
        vector<bool> vis(v);

        for(int i = 0; i < a; i++) {
            cin >> x >> y;
            grafo[x].push_back(y);
            grafo[y].push_back(x);
        }

        for(int i = 0; i < v; i++)
            vis[i] = false;

        res = -1;
        dfs(grafo, vis, n);
        cout << res*2 << endl;
    }
    return 0;
}
