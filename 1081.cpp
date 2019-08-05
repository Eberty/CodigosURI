#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &grafo, vector<bool> &vis, int u, int profundidade) {
    vis[u] = true;
    for (size_t i = 0; i < grafo[u].size(); i++) {
        int v = grafo[u][i];
        for (int j=0; j<profundidade; j++)
            printf("  ");
        if (!vis[v]) {
            cout << u << "-" << v << " pathR(G," << v << ")" << endl;
            dfs(grafo, vis, v, profundidade+1);
        } else {
            cout << u << "-" << v << endl;
        }
    }
}

int main() {
    int n, v, e, x, y;

    cin >> n;
    for (int k=1; k<=n; k++) {
        cout << "Caso " << k << ":" << endl;
        cin >> v >> e;

        vector<vector<int>> grafo(v);
        vector<bool> vis(v);

        for(int i = 0; i < e; i++) {
            cin >> x >> y;
            grafo[x].push_back(y);
        }

        for(int i = 0; i < v; i++)
            sort(grafo[i].begin(), grafo[i].end());
            
        for(int i = 0; i < v; i++)
            vis[i] = false;

        for(int i = 0; i < v; i++) {
            if(!vis[i]) {
                if (grafo[i].size()) {
                    dfs(grafo, vis, i, 1);
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
