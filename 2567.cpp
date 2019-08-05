#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, i, j, soma;
	
	while(cin >> n) {
		vector<int> vet(n);
		for(i=0; i<n; i++)
			cin >> vet[i];
		sort(vet.begin(), vet.end());
		
		soma = 0;
		for (i=0, j=n-1; i<j; i++, j--)
			soma += vet[j] - vet[i];
		cout << soma << endl;
	}
	return 0;
}
