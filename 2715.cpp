#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int i, j, n, x, soma1, soma2;
	vector<int> vet;
	
	while(cin >> n){
		vet.clear();
		for (i=0; i < n; i++){
			cin >> x;
			vet.push_back(x);
		}
	
		i = 0;
		j = n-1;
		soma1 = soma2 = 0;
		while (i <= j){
			if (soma1 <= soma2){
				soma1 += vet[i];
				i++;
			} else {
				soma2 += vet[j];
				j--;
			}
		}
		cout << abs(soma1-soma2) << endl;
	}
	return 0;
}
