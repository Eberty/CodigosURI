#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, c, chave;
	cin >> n;
	while (n--){
		cin >> m >> c;
		vector<vector<int>> vet(m);
		for (int i=0; i<c; i++){
			cin >> chave;
			vet[chave%m].push_back(chave);
		}
		for (int i=0; i<m; i++){
			cout << i << " -> ";
			for (size_t j=0; j<vet[i].size(); j++)
				cout << vet[i][j] << " -> ";
			cout << "\\" << endl;
		}
		if (n != 0)
			cout << endl;
	}
	return 0;
}
