#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, i;
	
	while (cin >> n){
		vector<pair<int, string>> vet(n);
		for (i=0; i<n; i++)
			cin >> vet[i].second >> vet[i].first;
		
		sort(vet.begin(), vet.end());
		
		for (i=0; i<n-1; i++)
			cout << vet[i].second << " ";
		cout << vet[i].second << endl;
	}
	
	return 0;
}
