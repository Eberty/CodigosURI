#include <bits/stdc++.h>

using namespace std;

int ehPrimo(int num){
	if (num == 2)
		return true;
	if (num%2 == 0 || num<2)
		return false;
	
	else{
		for (int i = 3; i * i <= num; i += 2){
			if (num%i == 0)
				return false;
		}
	}
	return true;
}

int main() {
	int m, n, aux, soma;
	
	while (cin >> m){
		vector<int> vet(m);	
		for (int i=0; i< m; i++){
			cin >> vet[i];
		}
		
		cin >> n;
		aux = soma =0;
		while ((m-1)-aux >= 0){
			soma += vet[(m-1)-aux];
			aux+=n;
		}
		if (ehPrimo(soma))
			cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
		else
			cout << "Bad boy! I’ll hit you."  << endl;
	}
	
	return 0;
}
