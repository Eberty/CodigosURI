#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, p, resp;

    while ((cin >> n >> k) && n && k) {
        map<int, int> perguntas;
        resp = 0;
        for (int i=0; i< n; i++) {
            cin >> p;
            perguntas[p]++;
        }
        for (map<int, int>::iterator p=perguntas.begin(); p!=perguntas.end(); ++p){
            if (((*p).second) >= k)
				resp++;
		}
		cout << resp << endl;
    }

    return 0;
}
