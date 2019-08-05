#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, iesima;
    string instrucao;
    vector<string> instrucoes;

    cin >> t;
    while (t--) {
        int p = 0;
        instrucoes.clear();
        cin >> n;
        while (n--) {
            cin >> instrucao;
            if(instrucao == "LEFT") {
                p--;
            } else if(instrucao == "RIGHT") {
                p++;
            } else { // SAME + AS
                cin >> instrucao;
                cin >> iesima;
                instrucao = instrucoes[iesima-1];
                if(instrucao == "LEFT")
                    p--;
                else if(instrucao == "RIGHT")
                    p++;
            }
            instrucoes.push_back(instrucao);
        }
        cout << p << endl;
    }

    return 0;
}
