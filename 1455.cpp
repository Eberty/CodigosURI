#include <bits/stdc++.h>

using namespace std;

int main() {
    int p1, c1, p2, c2;
    cin >> p1 >> c1 >> p2 >> c2;
    int res = (p1 * c1) - (p2 * c2);
    if (res > 0)
        cout << -1 << endl;
    else if (res < 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
