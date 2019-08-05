#include <bits/stdc++.h>

using namespace std;

int find(vector<int> &pai, int x) {
    if(pai[x] == x)
        return x;
    return pai[x] = find(pai, pai[x]);
}

void join(vector<int> &pai, int a, int b) {
    a = find(pai, a);
    b = find(pai, b);
    pai[a] = b;
}

int kruskal(int n, int m, vector<tuple<int, int, int>> &grafo) {
    vector<int> pai(n);
    for(int i = 0; i < n; i++)
        pai[i] = i;
    int custo = 0;
    for(int i = 0; i < m; i++) {
        if(find(pai, get<0>(grafo[i])) != find(pai, get<1>(grafo[i]))) {
            join(pai, get<0>(grafo[i]), get<1>(grafo[i]) );
            custo += get<2>(grafo[i]);
        }
    }
    return custo;
}

int main() {
    int n, m, x, y, c;
    scanf("%d %d", &n, &m);
    while (m && n) {
        vector<tuple<int, int, int>> grafo(m);

        for(int i = 0; i < m; i++) {
            scanf("%d %d %d", &x, &y, &c);
            get<0>(grafo[i]) = --x;
            get<1>(grafo[i]) = --y;
            get<2>(grafo[i]) = c;
        }

        sort(grafo.begin(), grafo.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
            return (get<2>(a) > get<2>(b));
        });
        int resp = kruskal(n, m, grafo);
        reverse(grafo.begin(), grafo.end());
        resp -= kruskal(n, m, grafo);

        printf("%d\n", resp);
        scanf("%d %d", &n, &m);
    }
    return 0;
}

