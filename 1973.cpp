#include <iostream>

using namespace std;

int main() {
	unsigned long long int n, soma = 0, x, y = 0, somaVetor = 0, estrela = 0;
	cin >> n; //ler n
	unsigned long long int vetor[n]; //cria vetor
	
	for (x = 0; x < n; x++) { //leitura
		cin >> vetor[x];
		somaVetor += vetor[x];
	}
	
	if (vetor[0] % 2 == 0){ //o primeiro for par eu ja paro de cara
		estrela++;
		soma++;
	}else{
		for (x = 0; x < n; x++) { //percorro ate achar um par
			if (vetor[x] % 2 != 0) {
				soma++;
			} else {
				soma++;
				estrela++;
				y = x;
				break;
			}
			estrela++;
		}
		
		if (y != 0) {
			for (x = 0; x < y - 1; x++)
				soma++;
		}

		if (vetor[0] > 1)
			soma++;
	}
	cout << estrela << " " << somaVetor - soma << endl;

   return 0;
}
