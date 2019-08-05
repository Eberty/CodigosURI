#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while ((cin >> n) && n) {
        vector<char> entrada(n);
        vector<char> saida(n);

        for (int i=0; i<n; i++)
            cin >> entrada[i];
        for (int i=0; i<n; i++)
            cin >> saida[i];

        int j=0;
        vector<char> pilha;
        for (int i=0; i<n; i++) {
            pilha.push_back(entrada[i]);
            printf("I");
            while(pilha.size() && pilha.back() == saida[j]) {
                pilha.pop_back();
                j++;
                printf("R");
            }
        }

        if (pilha.size() == 0)
            cout << endl;
        else
            cout << " Impossible" << endl;
    }
    return 0;
}
