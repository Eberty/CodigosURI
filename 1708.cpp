#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, rapido = 0, lento = 0, resp = 1;

    cin >> x >> y;
    while (lento - rapido < x) {
        resp++;
        rapido += x;
        lento += y;
    }
    cout << resp << endl;

    return 0;
}
