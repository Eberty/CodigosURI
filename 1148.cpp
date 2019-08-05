#include <bits/stdc++.h>

#define MAX 505
int grafo[MAX][MAX];

using namespace std;

void dijkstra(int o, int d, int n, vector<int> &dist) {
    queue<int> q;
    dist[o] = 0;
    q.push(o);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 0; i < n; i++) {
            if (dist[i] > dist[u] + grafo[u][i]) {
                dist[i] = dist[u] + grafo[u][i];
                q.push(i);
            }
        }
    }
}

int main() {
    int n, e, x, y, h, k, o, d;

    scanf("%d %d", &n, &e);
    while (n != 0 || e != 0) {
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                grafo[i][j] = MAX;

        for(int i = 0; i < e; i++) {
            scanf("%d %d %d", &x, &y, &h);
            grafo[--x][--y] = h;
            if (grafo[y][x] != MAX)
                grafo[x][y] = grafo[y][x] = 0;
        }

        scanf("%d", &k);
        for (int i=0; i<k; i++) {
            scanf("%d %d", &o, &d);
            vector<int> dist(n+1, MAX);
            dijkstra(--o, --d, n, dist);
            if (dist[d] < MAX)
                printf("%d\n", dist[d]);
            else
                printf("Nao e possivel entregar a carta\n");
        }
        printf("\n");
        scanf("%d %d", &n, &e);
    }

    return 0;
}
