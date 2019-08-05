#include <bits/stdc++.h>

#define E 2.71828182846

using namespace std;

int main() {
    int N, a, b, n, pedro = 0, lucas = 0;
    char aux;
    vector<bool> vet;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> a >> aux >> b;
        cin >> n >> aux;

        if ((n/E > a && n > b) || (b*log(a) < log(2*M_PI)/2.0 + (n + 1/2.0) * log(n) - n)) {
            pedro++;
            vet.push_back(false);
        } else {
            lucas++;
            vet.push_back(true);
        }
    }

    if (pedro > lucas)
        cout << "Campeao: Pedro!" << endl;
    else if (lucas > pedro)
        cout << "Campeao: Lucas!" << endl;
    else
        cout << "A competicao terminou empatada!" << endl;

    for(int i = 0; i < N; i++) {
        cout << "Rodada #" << i+1 << ": ";
        if(vet[i])
            cout << "Lucas foi o vencedor" << endl;
        else
            cout << "Pedro foi o vencedor" << endl;
    }

    return 0;
}
