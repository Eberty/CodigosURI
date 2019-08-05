#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, m, t, *bloco, *vet;

	cin >> t;

	while(t--) {
		cin >> n >> m;
		
		bloco = new int[n];
		vet = new int[m + 1];		

		for(int i = 0; i < n; i++)
			cin >> bloco[i];
		sort(bloco, bloco + n);
		
		for(int i = 0; i <= m; i++)
			vet[i] = i;

		for(int i = 0; i < n; i++) {
			for(int j = bloco[i]; j <= m; j++) {
				int soma = j - bloco[i];
				if(vet[soma] + 1 < vet[j])
					vet[j] = vet[soma] + 1;	
			}
		} 	
		
		cout << vet[m] << endl;

		delete[] bloco;
		delete[] vet;
	}

	return 0;
}
