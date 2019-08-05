#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, a, menorAno;
    string civ, res;

    while ((cin >> n) && n) {
        menorAno = 30000;
        for (int i=0; i<n; i++) {
            cin >> civ >> a >> t;
            if (a-t < menorAno) {
                menorAno = a-t;
                res = civ;
            }
        }
        cout << res << endl;
    }

    return 0;
}
