#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    while (cin >> m >> n) {
        map<string, int> dicionario;
        string palavra;
        int valor;
        for (int i=0; i<m; i++) {
            cin >> palavra >> valor;
            dicionario[palavra] = valor;
        }
        for (int i=0; i<n; i++) {
            valor = 0;
            palavra = "";
            while(palavra != ".") {
                cin >> palavra;
                if (dicionario.count(palavra))
                    valor += dicionario[palavra];
            }
            cout << valor << endl;
        }
    }

    return 0;
}
