#include <bits/stdc++.h>

using namespace std;

int main() {
    int ax, ay, bx, by, cx, cy, dx, dy, rx, ry, n;
    cin >> n;
    while (n--) {
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
        cout << ((rx >=ax && rx<=cx) && (ry>=ay && ry<=cy)) << endl;
    }
    return 0;
}
