#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, min, max, tot;
	
	while (cin >> n >> min >> max){
		vector<int> vet(n);
		tot = 0;
		for (int i=0; i<n; i++){
			cin >> vet[i];
			if (vet[i]>=min && vet[i]<=max)
				tot++;
		}
		cout << tot << endl;
	}
	
	return 0;
}
