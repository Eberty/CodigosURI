#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x, jogadores = 0;
    cin >> n >> m;

    while (n--) {
        int golsjogos = 0;
        for (int i=0; i < m; i++) {
            cin >> x;
            if (x)
                golsjogos++;
        }
        if (golsjogos == m)
            jogadores++;
    }
    cout << jogadores << endl;

    return 0;
}
