#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, h, picos;
	vector<int> vet;
	cin >> n;
	while (n != 0){
		picos = 0;
		for(int i=0; i<n; i++){
			cin >> h;
			vet.push_back(h);
		}
		for(int i=0; i<n; i++){
			if ((vet[i] > vet[(i+1)%n] && vet[i] > vet[(i-1+n)%n]) || (vet[i] < vet[(i+1)%n] && vet[i] < vet[(i-1+n)%n]))
				picos++;
		}
		cout << picos << endl;
		vet.clear();
		cin >> n;
	}
	
	
	return 0;
}
