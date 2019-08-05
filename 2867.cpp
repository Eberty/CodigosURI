#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n, m;
    cin >> c;
    while (c--) {
        cin >> n >> m;
        cout << floor(log10(n) * m) + 1 << endl;
    }
    return 0;
}
