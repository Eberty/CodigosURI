#include <iostream>

#define h 50

using namespace std;

int main (){
	unsigned long long tot, n, m, vet[h], sub;	

	cin >> n;

	while(n){
		tot = 0;

		for(int i = 0; i < n; i++){
			cin >> vet[i];
		}

		for(int i = n-1; i >= 0; i--){
			sub = vet[i];
			vet[i] = 0;
			for(int j = 0; j < i; j++){
				vet[j] += sub;
			}
			tot += sub;
		}

		cout << tot << endl;

		cin >> n;
	}

	return 0;
}
