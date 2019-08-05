#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

int main() {
    int n;
    while (scanf("%d", &n)  && n) {
        ll v, w, q, s, t;
        vector<vii> AdjList;

        AdjList.assign(n, vii());
        for (int i = 1; i < n; i++) {
            scanf("%lld %lld", &v, &w);
            AdjList[i].push_back(ii(v, w));
            AdjList[v].push_back(ii(i, w));
        }
        // BFS
        vector<ll> dist(n, -1);
        vector<int> p;
        queue<ll> qq;
        qq.push(0);
        dist[0] = 0;
        p.assign(n, -1);
        while (!qq.empty()) {
            int u = qq.front();
            qq.pop();
            for (int j = 0; j < (int)AdjList[u].size(); j++) {
                ii v = AdjList[u][j];
                if (dist[v.first] < 0) {
                    dist[v.first] = dist[u] + v.second;
                    p[v.first] = u;
                    qq.push(v.first);
                }
            }
        }
        scanf("%lld", &q);
        while (q--) {
            scanf("%lld %lld", &s, &t);
            int LCA = 0;
            set<int> memo;

            for (int k = s; k >= 0; k = p[k])
                memo.insert(k);
            for (int k = t; k >= 0; k = p[k])
                if (memo.count(k)) {
                    LCA = k;
                    break;
                }
            printf("%lld%c", dist[s] + dist[t] - 2 * dist[LCA], q ? ' ' : '\n');
        }
    }

    return 0;
}
