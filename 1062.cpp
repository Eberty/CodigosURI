#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        vector<int> entrada(n);
        cin >> entrada[0];
        while (entrada[0] != 0) {
            for (int i=1; i<n; i++) {
                cin >> entrada[i];
            }
            vector<int> saida;
            int vagaoSaida = n;
            for (int i=n-1; i>=0; i--) {
                saida.push_back(entrada[i]);
                while(saida.size() != 0 && saida.back() == vagaoSaida) {
                    saida.pop_back();
                    vagaoSaida--;
                }
            }

            if (saida.size() == 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            cin >> entrada[0];
        }
        cout << endl;
        cin >> n;
    }

    return 0;
}
