#include <bits/stdc++.h>

using namespace std;

bool loop;

void dfs(vector<vector<int>> &grafo, vector<int> &vis, int u) {
    vis[u] = 1;
    for (size_t i = 0; i < grafo[u].size(); i++) {
        int v = grafo[u][i];
        if (vis[v] == 0)
            dfs(grafo, vis, v);
        else if (vis[v] == 1){
            loop = true;
            return;
        }
    }
    vis[u] = 2;
}

int main() {
    int t, n, m, a, b;

    cin >> t;
    while (t--) {
        cin >> n >> m;

        vector<vector<int>> grafo(n);
        vector<int> vis(n);
        loop = false;

        for(int i = 0; i < m; i++) {
            cin >> a >> b;
            grafo[--a].push_back(--b);
        }

        for(int i = 0; i < n; i++)
            vis[i] = false;

        for(int i = 0; i < n; i++) {
            if(!vis[i])
                dfs(grafo, vis, i);
            if (loop)
                break;
        }

        if (loop)
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;
    }
    return 0;
}
