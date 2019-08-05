#include <bits/stdc++.h>

using namespace std;

bool todos (vector<bool> &vet) {
    for(size_t i=0; i<vet.size(); i++) {
        if (!vet[i])
            return false;
    }
    return true;
}

int main() {
    int n, b;
    while ((cin >> n >> b) && n && b) {
        vector<int> bolas(b);
        vector<bool> numeros(n+1);

        for(int i=0; i<b; i++)
            cin >> bolas[i];

        for(int i=0; i<b; i++)
            for(int j=i; j<b; j++)
                numeros[abs(bolas[i] - bolas[j])] = true;

        cout << (todos(numeros)?"Y":"N") << endl;
    }
    return 0;
}
