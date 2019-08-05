#include <bits/stdc++.h>
#define MAX 100010

using namespace std;

int dist[MAX];
bool proibido[MAX];

int adj(int i, int u) {
    switch (i) {
    case 0:
        return u - 1;
    case 1:
        return u + 1;
    case 2:
        return u / 2;
    case 3:
        return u * 2;
    default:
        return u * 3;
    }
}

int bfs(int o, int d) {
    queue<int> q;
    dist[o] = 0;
    q.push(o);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        if(u == d)
            return dist[u];

        for (int i = 0; i < 5; i++) {
            if (i == 2 && u%2==1) continue;
            int proxCanal = adj(i, u);
            if (proxCanal > 0 && proxCanal <= 100000 && dist[proxCanal]==-1 && !proibido[proxCanal]) {
                dist[proxCanal] = dist[u] + 1;
                q.push(proxCanal);
            }
        }
    }
    return -1;
}

int main() {
    int o, d, k, canal;

    scanf("%d %d %d", &o, &d, &k);
    while(o || d || k) {
        for (int i = 0; i < MAX; i++) {
            dist[i] = -1;
            proibido[i] = false;
        }

        for(int i=0; i<k; i++) {
            scanf("%d", &canal);
            proibido[canal] = true;
        }

        printf("%d\n", bfs(o, d));
        scanf("%d %d %d", &o, &d, &k);
    }
    return 0;
}
