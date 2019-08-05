#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n, c, notas, carga;
	cout.precision(4);
	while (cin >> m){
		notas = carga = 0;
		for (int i=0; i<m; i++){
			cin >> n >> c;
			notas+=(n*c);
			carga+=c;
		}

		cout << fixed << (notas / (carga*100.0)) << endl; 
	}
	
	
	return 0;
}
