#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, d;

    while ((cin >> a >> d) && a && d) {
        bool impedido = false;
        vector<int> atacantes(a);
        vector<int> defensores(d);
        for (int i=0; i<a; i++)
            cin >> atacantes[i];
        for (int i=0; i<d; i++)
            cin >> defensores[i];

        sort(atacantes.begin(), atacantes.end());
        sort(defensores.begin(), defensores.end());

        for (int i=0; i<a; i++) {
            if ((atacantes[i] < defensores[1]) || (atacantes[i] < defensores[0] && (atacantes[i] < defensores[1]))) {
                impedido = true;
                break;
            }
        }
        cout << (impedido?"Y":"N") << endl;
    }


    return 0;
}
