#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, x, y, cidade = 0;
	bool primeira = true;
	map<int, int> vet;
	
	while (cin >> n && n){
		int qtdPessoas=0, qtdConsumo=0;
		vet.clear();
		
		if(! primeira)
			cout << endl;
		cout << "Cidade# " << ++cidade << ":" << endl;
		
		for (int i=0; i<n; i++){
			cin >> x >> y;
			vet[y/x] += x;
			qtdPessoas += x;
			qtdConsumo += y;
		}
		int j=0;
		for (map<int , int>::iterator it = vet.begin(); it != vet.end(); ++it, j++){
			if (j < vet.size()-1)
				cout << it->second << "-" << it->first << " ";
			else
				cout << it->second << "-" << it->first << endl;
		}
		printf("Consumo medio: %.2f m3.\n", floor(100 * (float)qtdConsumo/qtdPessoas) / 100);
		primeira = false;
	}
	
	
	return 0;
}
