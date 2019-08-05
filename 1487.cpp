#include<iostream>

using namespace std;

typedef struct {
	int d, p;
} tBrinquedo;


int main() {
	int d, n, t, p, h = 1;
	int *vet;
	tBrinquedo *brinquedos;	

	cin >> n >> t;
	while(n) {
		brinquedos = new tBrinquedo[n];

		vet = new int[t + 1];

		for(int i = 0; i <= t; i++)
			vet[i] = 0;
		for(int i = 0; i < n; i++)
			cin >> brinquedos[i].d >> brinquedos[i].p;


		for(int i = 0; i < n; i++) {
			for(int j = brinquedos[i].d; j <= t; j++) {
				int soma = j - brinquedos[i].d;
				if(vet[j] < vet[soma] + brinquedos[i].p)
					vet[j] = vet[soma] + brinquedos[i].p;
			}
		}

		cout << "Instancia " << h << endl;
		cout << vet[t] << endl << endl;
		h++;
		
		delete[] vet;
		delete[] brinquedos;
		cin >> n >> t;
	}

	return 0;
}

