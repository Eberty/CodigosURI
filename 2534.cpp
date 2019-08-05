#include <bits/stdc++.h>

using namespace std;

bool func(int a, int b){
	return a > b;
}

int main() {
	int n, q, p;
	
	while (cin >> n >> q){
		vector <int> vet(n);
		for(int i=0; i<n; i++)
			cin >> vet[i];
		
		sort(vet.begin(), vet.end(), func);
		
		for(int i=0; i<q; i++){
			cin >> p;
			cout << vet[p-1] << endl;
		}
	}
	return 0;
}
