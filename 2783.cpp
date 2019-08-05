#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, m, aux, count=0;

    cin >> n >> c >> m;
    vector<bool> carimbada(n, false);
    for (int i=0; i<c; i++) {
        cin >> aux;
        carimbada[aux] = true;
    }
    for (int i=0; i<m; i++) {
        cin >> aux;
        if (carimbada[aux]) {
			count++;
            carimbada[aux] = false;
        }
    }
	cout << c-count << endl;
    return 0;
}
