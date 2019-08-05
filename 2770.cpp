#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, m, xi, yi;

    while (cin >> x >> y >> m) {
        for (int i=0; i<m; i++) {
            cin >> xi >> yi;
            if (xi>x || yi>y)
                if (yi>x || xi>y)
                    cout << "Nao" << endl;
                else
                    cout << "Sim" << endl;
            else
                cout << "Sim" << endl;
        }
    }

    return 0;
}
