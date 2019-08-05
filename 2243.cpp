#include <bits/stdc++.h>

using namespace std;

int main() {
	int maior, n, v[50010];
	cin >> n;
	
	//Nao tem nanhum cubo antes e nenhum dps
	v[0] = 0;
	v[n+1] = 0;
	
	//Se ele for maior q o anterior, eu poderia somar +1 coluna ao anterior, costruindo o /|.
	for(int i = 1; i <= n; i++) {
		cin >> v[i];
		if (v[i] > v[i-1])
			v[i] = v[i-1] + 1;
	}
	
	//Se ele for maior q o anterior, eu poderia somar +1 coluna ao anterior fazeno o |\.
	for(int i = n; i >= 1; i--) {
		if (v[i] > v[i+1])
			v[i] = v[i+1] + 1;
	}
	
	//Procura maior
	maior = 0;
	for(int i = 0; i <= n; i++){
		if (v[i] > maior)
			maior = v[i];
	}
	
	cout << maior << endl;
	return 0;
}
