#include <bits/stdc++.h>

using namespace std;

int main() {
	int c, n, pessoa, tot, maismedia;
	double media;
	vector<int> alunos;
	
	cin >> c;
	while (c--){
		tot = 0;
		maismedia = 0;
		cin >> n;
		for (int i=0; i<n; i++){
			cin >> pessoa;
			tot += pessoa;
			alunos.push_back(pessoa);
		}
		media = (double) tot / (double)n;
		for (int i=0; i<n; i++){
			if (alunos[i] > media)
				maismedia++;
		}
		
		printf("%.3f%%\n", (double) (maismedia / (double)n) * 100);
		
		alunos.clear();
	}
	
	return 0;
}
