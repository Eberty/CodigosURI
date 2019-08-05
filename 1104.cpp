#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, aux;
    cin >> a >> b;
    while (a && b) {
        set<int> va;
        for (int i=0; i<a; i++) {
            cin >> aux;
            va.insert(aux);
        }
        set<int> vb;
        for (int i=0; i<b; i++) {
            cin >> aux;
            vb.insert(aux);
        }
        size_t menorConjunto = min(va.size(), vb.size());
        set<int> intersect;
        set_intersection(va.begin(),va.end(),vb.begin(),vb.end(), std::inserter(intersect,intersect.begin()));
        cout << menorConjunto - intersect.size() << endl;
        cin >> a >> b;
    }
    return 0;
}
