#include <bits/stdc++.h>

using namespace std;

vector<int> componentes;

void dfs(vector<vector<int>> &grafo, vector<bool> &vis, int u) {
    vis[u] = true;
    componentes.push_back(u);
    for (size_t i = 0; i < grafo[u].size(); i++) {
        int v = grafo[u][i];
        if (!vis[v])
            dfs(grafo, vis, v);
    }
}

int main() {
    int n, v, e, resp;
    char x, y;

    cin >> n;
    for (int k=1; k<=n; k++) {
        printf("Case #%d:\n", k);
        cin >> v >> e;
        vector<vector<int>> grafo(v);
        vector<bool> vis(v);
        resp = 0;

        for(int i = 0; i < e; i++) {
            cin >> x >> y;
            x -= 'a';
            y -= 'a';
            grafo[x].push_back(y);
            grafo[y].push_back(x);
        }

        for(int i = 0; i < v; i++)
            vis[i] = false;

        for(int i = 0; i < v; i++) {
            if(!vis[i]) {
                componentes.clear();
                dfs(grafo, vis, i);
                sort(componentes.begin(), componentes.end());
                for (size_t j=0; j<componentes.size(); j++)
                    printf("%c,", componentes[j]+'a');
                printf("\n");
                resp++;
            }
        }
        printf("%d connected components\n\n", resp);
    }
    return 0;
}
